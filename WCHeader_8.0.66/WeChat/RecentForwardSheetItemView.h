@class CContact, UIImageView, MMUIButton, MMUILabel;
@protocol RecentForwardSheetItemViewDelegate;

@interface RecentForwardSheetItemView : UIView

@property (nonatomic) BOOL isEditing;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) UIImageView *selectedImageView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (nonatomic) BOOL forceDarkMode;
@property (retain, nonatomic) MMUIButton *smallDeleteButton;
@property (weak, nonatomic) id<RecentForwardSheetItemViewDelegate> delegate;
@property (retain, nonatomic) UIImageView *chatBotIcon;
@property (retain, nonatomic) CContact *oContact;

- (id)initWithContact:(id)a0 iconWidth:(double)a1 bottomPadding:(double)a2 titleFont:(id)a3 itemMarginLeft:(double)a4;
- (void)changeSelectedStatus:(BOOL)a0;
- (void)changeEditingStatus:(BOOL)a0;
- (void)updateImageView;
- (void)onClickSmallDeleteButton;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (unsigned long long)accessibilityTraits;
- (void).cxx_destruct;

@end
