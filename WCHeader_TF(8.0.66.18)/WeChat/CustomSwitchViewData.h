@class NSString, CustomSwitchState;

@interface CustomSwitchViewData : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *viewId;
@property (retain, nonatomic) CustomSwitchState *checkedState;
@property (retain, nonatomic) CustomSwitchState *uncheckedState;
@property (nonatomic) BOOL checked;

+ (void)initialize;

@end
