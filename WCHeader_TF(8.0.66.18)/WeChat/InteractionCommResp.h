@class NSString, FinderAuthorInteractionInfo;

@interface InteractionCommResp : WXPBGeneratedMessage

@property (nonatomic) unsigned int recommendFollow;
@property (retain, nonatomic) NSString *recommendFollowWording;
@property (retain, nonatomic) FinderAuthorInteractionInfo *interactionInfo;

+ (void)initialize;

@end
