@class NSData;

@interface IESLiveAioLinkLuckyBoxLazyLoadParams : IESLivePBBaseMessage

@property (copy, nonatomic) NSData *message;
@property (copy, nonatomic) NSData *api;

+ (id)descriptor;

@end
