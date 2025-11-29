@class UIStackView, AWELoginButton, NSMutableArray, DYUserProtocolView;
@protocol DYSSOLoginViewDelegate;

@interface DYSSOLoginView : UIScrollView

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) NSMutableArray *platforms;
@property (retain, nonatomic) NSMutableArray *buttons;
@property (retain, nonatomic) AWELoginButton *moreButton;
@property (nonatomic) unsigned long long showCount;
@property (nonatomic) double buttonSize;
@property (nonatomic) double buttonSpace;
@property (weak, nonatomic) id<DYSSOLoginViewDelegate> delegate;
@property (weak, nonatomic) DYUserProtocolView *protocolView;

- (void)moreAction:(id)a0;
- (void)shakeProtocolView;
- (void)showAllPlatforms;
- (id)loginButtonWithPlatform:(id)a0;
- (void)SSOButtonClicked:(id)a0;
- (id)initWithPlatforms:(id)a0 showCount:(unsigned long long)a1 space:(double)a2 width:(double)a3;
- (void).cxx_destruct;
- (void)commonInit;

@end
