@interface IESLiveUpdateMediaInfoNotify : IESLivePBBaseMessage

@property (nonatomic) BOOL needUpdate;
@property (nonatomic) long long position;

+ (id)descriptor;

@end
