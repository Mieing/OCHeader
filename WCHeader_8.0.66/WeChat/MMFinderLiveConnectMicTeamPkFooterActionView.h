@class MMFinderLiveConnectMicPKInfo, UILabel, MMLiveIconButton, UIButton;

@interface MMFinderLiveConnectMicTeamPkFooterActionView : UICollectionReusableView

@property (retain, nonatomic) MMLiveIconButton *pkButton;
@property (retain, nonatomic) UIButton *closeMicButton;
@property (retain, nonatomic) UILabel *waitPkStartLabel;
@property (retain, nonatomic) MMFinderLiveConnectMicPKInfo *pkInfo;
@property (nonatomic) BOOL isApplicant;
@property (copy, nonatomic) id /* block */ pkBlock;
@property (copy, nonatomic) id /* block */ quitMicBlock;

+ (id)cellIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)update:(id)a0 isApplicant:(BOOL)a1;
- (void)initViews;
- (void)layoutSubviews;
- (void)onPkAction;
- (void)onCloseMic;
- (void).cxx_destruct;

@end
