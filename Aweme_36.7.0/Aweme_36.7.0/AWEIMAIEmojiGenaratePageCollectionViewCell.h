@class UIImageView, UIControl;
@protocol IESIMCheckBoxProtocol, AWEIMAIEmojiGenaratePageCollectionViewCellDelegate;

@interface AWEIMAIEmojiGenaratePageCollectionViewCell : AWEIMEmoticonFullImageCollectionViewCell

@property (retain, nonatomic) UIImageView *editImageView;
@property (retain, nonatomic) UIControl<IESIMCheckBoxProtocol> *checkBox;
@property (weak, nonatomic) id<AWEIMAIEmojiGenaratePageCollectionViewCellDelegate> delegate;

+ (id)identifier;

- (void)renderWithViewModel:(id)a0;
- (void)p_didClickCheckBox;
- (void)layoutComponent;
- (void)createComponent;
- (void)p_didClickEdit;
- (void).cxx_destruct;

@end
