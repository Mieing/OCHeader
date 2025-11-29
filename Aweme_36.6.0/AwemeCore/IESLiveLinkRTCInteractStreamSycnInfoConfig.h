@interface IESLiveLinkRTCInteractStreamSycnInfoConfig : NSObject

@property (nonatomic) long long streamIndex;
@property (nonatomic) int repeatCount;
@property (nonatomic) long long streamType;

- (id)initWithStreamIndex:(long long)a0 repeatCount:(int)a1 streamType:(long long)a2;

@end
