@class IESLiveAioLinkGlobalProps, IESLiveAioLinkSchemaQuery;

@interface IESLiveAioLinkContainerInfo : IESLivePBBaseMessage

@property (nonatomic) int type;
@property (retain, nonatomic) IESLiveAioLinkGlobalProps *globalProps;
@property (nonatomic) BOOL hasGlobalProps;
@property (retain, nonatomic) IESLiveAioLinkSchemaQuery *schemeQuery;
@property (nonatomic) BOOL hasSchemeQuery;

+ (id)descriptor;

@end
