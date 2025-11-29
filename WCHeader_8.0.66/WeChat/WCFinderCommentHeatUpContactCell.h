@class UIImageView, NSString;

@interface WCFinderCommentHeatUpContactCell : UICollectionViewCell <WCFinderPromoteOPLogExt>

@property (retain, nonatomic) UIImageView *headImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)setUpUI;
- (void)updateWitCellViewModel:(id)a0;
- (void)onCommentPromotePublicFlagChange:(BOOL)a0;
- (void).cxx_destruct;

@end
