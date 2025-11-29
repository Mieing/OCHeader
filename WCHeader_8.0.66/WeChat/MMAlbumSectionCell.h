@class MMUILabel, MMUIButton;
@protocol MMAlbumSectionCellDelegate;

@interface MMAlbumSectionCell : UIView

@property (weak, nonatomic) id<MMAlbumSectionCellDelegate> delegate;
@property (nonatomic) unsigned long long section;
@property (retain, nonatomic) MMUIButton *button;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (nonatomic) BOOL active;

- (id)initWithSection:(unsigned long long)a0;
- (void)initViews;
- (void)updateTitle:(id)a0 animated:(BOOL)a1;
- (void)laytoutTitleViews;
- (void)onClick:(id)a0;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;

@end
