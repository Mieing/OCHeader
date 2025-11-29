@interface IESLiveAioLinkNormalizedRect : IESLivePBBaseMessage

@property (nonatomic) float left;
@property (nonatomic) float top;
@property (nonatomic) float right;
@property (nonatomic) float bottom;

+ (id)descriptor;

@end
