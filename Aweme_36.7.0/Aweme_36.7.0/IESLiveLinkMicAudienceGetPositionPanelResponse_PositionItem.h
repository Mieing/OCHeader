@class NSString;

@interface IESLiveLinkMicAudienceGetPositionPanelResponse_PositionItem : IESLivePBBaseMessage

@property (nonatomic) BOOL used;
@property (nonatomic) BOOL locked;
@property (copy, nonatomic) NSString *userId;
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL isEnlarged;

+ (id)descriptor;

@end
