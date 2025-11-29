@class NSString, UIImageView, AWECommonFeedSectionContext, UILabel, UIView;
@protocol AWECommonFeedCellModelProtocol;

@interface AWEHotSearchCommentAISummaryFooter : UICollectionViewCell <AWECommonFeedCellProtocol>

@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UIImageView *bottomQuoteView;
@property (retain, nonatomic) id<AWECommonFeedCellModelProtocol> cellModel;
@property (retain, nonatomic) AWECommonFeedSectionContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)awe_themeDidChange:(long long)a0;
- (BOOL)isGray;
- (void)updateCellLayout;
- (void)configCellWithContext:(id)a0 cellModel:(id)a1;
- (void)p_resetQuoteImage;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)hasVideo;

@end
