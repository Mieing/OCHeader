@class UIColor, NSString, UIImageView, UIView;
@protocol AWEIMTranspondListCellActionDelegate;

@interface AWEIMShareMutiselectListCollectionViewCell : AWEIMTranspondListCollectionViewCell <AWEIMShareMutiselectListCollectionViewCellProtocol>

@property (retain, nonatomic) UIView *selectedContainerView;
@property (retain, nonatomic) UIImageView *selectedImageView;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) UIColor *selectedContainerViewColor;
@property (weak, nonatomic) id<AWEIMTranspondListCellActionDelegate> delegate;
@property (nonatomic) BOOL isFromFansGroupManage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithShareModel:(id)a0;
- (void)turnLabelToPassAMessage;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)avatarTapped:(id)a0;

@end
