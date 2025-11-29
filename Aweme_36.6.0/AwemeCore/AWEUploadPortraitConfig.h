@class NSDictionary;

@interface AWEUploadPortraitConfig : NSObject

@property (nonatomic) BOOL enable;
@property (nonatomic) long long limitTimes;
@property (nonatomic) long long waitMs;
@property (retain, nonatomic) NSDictionary *portraits;

- (void).cxx_destruct;

@end
