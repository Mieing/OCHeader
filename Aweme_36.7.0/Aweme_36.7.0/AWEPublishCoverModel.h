@class NSString;

@interface AWEPublishCoverModel : NSObject

@property (nonatomic) double coverTsp;
@property (nonatomic) BOOL blackFrameFlag;
@property (nonatomic) unsigned long long defaultCoverSource;
@property (nonatomic) long long randomCheckFrameCount;
@property (copy, nonatomic) NSString *stickers;
@property (copy, nonatomic) NSString *templates;
@property (nonatomic) unsigned long long assignCoverType;

- (void).cxx_destruct;

@end
