@class NSString;

@interface IESLiveAioLinkUnLoadLinkerData : IESLivePBBaseMessage

@property (nonatomic) long long scene;
@property (copy, nonatomic) NSString *source;

+ (id)descriptor;

@end
