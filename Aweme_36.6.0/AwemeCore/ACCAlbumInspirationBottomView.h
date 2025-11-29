@class NSString, UILabel, UIView, UIButton;

@interface ACCAlbumInspirationBottomView : UIView <ACCSelectedAssetsBottomViewProtocol>

@property (retain, nonatomic) UILabel *textLable;
@property (retain, nonatomic) UIView *lineSeperator;
@property (retain, nonatomic) NSString *showLawText;
@property (retain, nonatomic) UIButton *nextButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL doAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
