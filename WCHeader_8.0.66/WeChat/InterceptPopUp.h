@class NSString, PopUpJumpInfo;

@interface InterceptPopUp : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) PopUpJumpInfo *leftButton;
@property (retain, nonatomic) PopUpJumpInfo *rightButton;
@property (nonatomic) unsigned int popUpType;

+ (void)initialize;

@end
