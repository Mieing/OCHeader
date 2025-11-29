@class NSString, NSData;

@interface IESLiveAioLinkLazyLoadRequest : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *interfaceId;
@property (copy, nonatomic) NSData *params;

+ (id)descriptor;

@end
