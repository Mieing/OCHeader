@class NSString;

@interface EmoticonStoreMainTabExptSetting : NSObject

@property (retain, nonatomic) NSString *tabWording;
@property (retain, nonatomic) NSString *listWording;
@property (nonatomic) int type;

+ (id)savePath;

- (id)initWithJsonString:(id)a0;
- (void).cxx_destruct;

@end
