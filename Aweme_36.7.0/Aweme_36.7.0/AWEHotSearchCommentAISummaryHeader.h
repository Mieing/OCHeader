@class AWEHotSearchCommentAISummaryHeaderModel, NSString, AWEHotSearchCommentGradientLabel, DUXPluralAvatar, UILabel, AWECommonFeedSectionContext;

@interface AWEHotSearchCommentAISummaryHeader : UICollectionViewCell <AWECommonFeedCellProtocol>

@property (retain, nonatomic) AWEHotSearchCommentGradientLabel *positionLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) DUXPluralAvatar *avatarsView;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) AWEHotSearchCommentAISummaryHeaderModel *cellModel;
@property (retain, nonatomic) AWECommonFeedSectionContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)awe_themeDidChange:(long long)a0;
- (BOOL)isGray;
- (void)updateCellLayout;
- (void)configCellWithContext:(id)a0 cellModel:(id)a1;
- (id)p_commentCountText:(id)a0;
- (void)p_asyncSetAvatars:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)hasVideo;

@end
