@class NSDictionary;

@interface AWEECOMIMFoldGroupConfig : NSObject

@property (copy, nonatomic) NSDictionary *originDict;
@property (nonatomic) double foldBeginTime;
@property (nonatomic) long long foldMaxPullTime;
@property (nonatomic) BOOL foldDisable;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
