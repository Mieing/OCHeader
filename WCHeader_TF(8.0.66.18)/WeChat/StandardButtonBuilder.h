@class NSString, UIButton;

@interface StandardButtonBuilder : NSObject

@property (nonatomic) unsigned long long btnType;
@property (nonatomic) unsigned long long btnSize;
@property (nonatomic) unsigned long long btnStyle;
@property (nonatomic) BOOL btnLoading;
@property (retain, nonatomic) NSString *btnIconName;
@property (readonly, copy, nonatomic) id /* block */ type;
@property (readonly, copy, nonatomic) id /* block */ size;
@property (readonly, copy, nonatomic) id /* block */ style;
@property (readonly, copy, nonatomic) id /* block */ iconName;
@property (readonly, copy, nonatomic) id /* block */ loading;
@property (readonly, copy, nonatomic) id /* block */ customizedBtn;
@property (readonly, nonatomic) UIButton *standardButton;

- (id)init;
- (id)realGenStandatdBtn;
- (void)applyPrimaryTypeTo:(id)a0;
- (void)applySecondaryTypeTo:(id)a0;
- (void)applyNegativeTypeTo:(id)a0;
- (void)applyLargeSizeTo:(id)a0;
- (void)applyMediumSizeTo:(id)a0;
- (void)applySmallSizeTo:(id)a0;
- (void).cxx_destruct;

@end
