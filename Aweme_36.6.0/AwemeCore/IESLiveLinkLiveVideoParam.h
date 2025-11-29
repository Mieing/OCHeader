@interface IESLiveLinkLiveVideoParam : NSObject

@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) long long fps;
@property (nonatomic) long long bitRateKbps;
@property (nonatomic) long long gop;

- (id)init;

@end
