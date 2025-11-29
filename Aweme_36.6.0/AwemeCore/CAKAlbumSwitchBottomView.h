@class NSString, UILabel, UIView, UIButton;

@interface CAKAlbumSwitchBottomView : UIView <CAKAlbumBottomViewProtocol>

@property (retain, nonatomic) UIView *seperatorLineView;
@property (retain, nonatomic) UIButton *switchButton;
@property (copy, nonatomic) id /* block */ switchBlock;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *nextButton;
@property (nonatomic) long long themeType;
@property (nonatomic) BOOL doAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
