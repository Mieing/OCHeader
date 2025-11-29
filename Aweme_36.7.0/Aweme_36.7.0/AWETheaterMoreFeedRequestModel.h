@interface AWETheaterMoreFeedRequestModel : AWEBaseApiModel

@property (nonatomic) long long offset;
@property (nonatomic) long long count;
@property (nonatomic) BOOL isSpringFestivalTask;
@property (nonatomic) long long appletOffset;

- (id)init;

@end
