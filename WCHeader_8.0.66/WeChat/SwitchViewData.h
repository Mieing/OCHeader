@class NSString, DialogAction;

@interface SwitchViewData : WXPBGeneratedMessage

@property (nonatomic) int switchState;
@property (nonatomic) int switchType;
@property (retain, nonatomic) NSString *viewId;
@property (retain, nonatomic) DialogAction *closeAction;
@property (retain, nonatomic) DialogAction *openAction;

+ (void)initialize;

@end
