@class PAGView, PAGFile, UILabel, UIView;

@interface MMFinderLiveShopVIPWidgetView : UIView

@property (retain, nonatomic) PAGView *pagView;
@property (retain, nonatomic) UIView *shadowView;
@property (retain, nonatomic) UILabel *textView;
@property (nonatomic) BOOL isWeakState;
@property (retain, nonatomic) PAGFile *enterPAG;
@property (retain, nonatomic) PAGFile *preWeakenPAG;
@property (copy, nonatomic) id /* block */ onClicked;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onTap;
- (void)willEnterContainer;
- (void)prepareToNormalState;
- (void)layoutSubviews;
- (void)willToNormalState;
- (void).cxx_destruct;

@end
