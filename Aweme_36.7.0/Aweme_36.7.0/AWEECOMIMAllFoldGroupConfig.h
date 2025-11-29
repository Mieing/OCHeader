@class NSDictionary, AWEECOMIMFoldGroupConfig;

@interface AWEECOMIMAllFoldGroupConfig : NSObject

@property (copy, nonatomic) NSDictionary *foldGroupConfigMap;
@property (retain, nonatomic) AWEECOMIMFoldGroupConfig *foldGroupDefaultConfig;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
