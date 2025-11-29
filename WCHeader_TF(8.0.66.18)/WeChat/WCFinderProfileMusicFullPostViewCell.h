@class UIImageView, RichTextView, NSString;
@protocol WCFinderProfileMusicFullPostViewCellDelegate;

@interface WCFinderProfileMusicFullPostViewCell : UICollectionViewCell <ILinkEventExt>

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) RichTextView *tipsLabel;
@property (weak, nonatomic) id<WCFinderProfileMusicFullPostViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
