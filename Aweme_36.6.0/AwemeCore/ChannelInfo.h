@interface ChannelInfo : IESLivePBBaseMessage

@property (nonatomic) int vendor;
@property (nonatomic) int layout;
@property (nonatomic) int dimension;

+ (id)descriptor;

@end
