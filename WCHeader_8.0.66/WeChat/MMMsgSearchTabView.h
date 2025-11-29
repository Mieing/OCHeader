@class UIColor, NSString, MMUIActivityIndicatorView, MMUIImageView, UILabel, UIView;
@protocol MMMsgSearchTabViewDelegate;

@interface MMMsgSearchTabView : UIView <MMMsgSearchTabViewProtocol> {
    MMUIActivityIndicatorView *m_activityIndicatorView;
    MMUIImageView *m_loadingDoneImageView;
    id<MMMsgSearchTabViewDelegate> delegate;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) double fontSize;
@property (retain, nonatomic) UILabel *numberLabel;
@property (nonatomic) double numberFontSize;
@property (retain, nonatomic) UIColor *normalColor;
@property (retain, nonatomic) UIColor *selectedColor;
@property (nonatomic) unsigned int msgSearchType;
@property (nonatomic) unsigned int msgSearchLoadingType;
@property (nonatomic) unsigned int msgSearchViewTitleLeftMargin;
@property (nonatomic) unsigned int msgSearchViewTitleRightMargin;
@property (nonatomic) unsigned int msgSearchNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTitleText:(id)a0;
- (void)sizeToFit;
- (double)getTabUnderLineWidth;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getTitleLabelFrame;
- (double)getMsgSearchType;
- (void)initUI;
- (void)initActivityIndicatorView;
- (void)initLoadingDoneImageView;
- (void)initNumberLabel;
- (double)calculateWidth;
- (void)updateForState:(unsigned long long)a0;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;

@end
