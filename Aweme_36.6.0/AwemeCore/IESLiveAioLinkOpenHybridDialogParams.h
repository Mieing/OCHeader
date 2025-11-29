@class NSString, IESLiveAioLinkHybridComponentConfig;

@interface IESLiveAioLinkOpenHybridDialogParams : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) IESLiveAioLinkHybridComponentConfig *config;
@property (nonatomic) BOOL hasConfig;

+ (id)descriptor;

@end
