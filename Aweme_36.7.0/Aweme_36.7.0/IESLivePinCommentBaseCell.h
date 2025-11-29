@class IESLivePinCommentNode, NSString, IESLiveEmojiTextParser, UILabel, IESLivePinOperateView, UIView;
@protocol IESLivePinCommentCellDelegate;

@interface IESLivePinCommentBaseCell : UICollectionViewCell <IESLivePinCommentCellProtocol>

@property (retain, nonatomic) UIView *redLineView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIView *operateBaseLine;
@property (retain, nonatomic) IESLivePinOperateView *operateView;
@property (retain, nonatomic) IESLiveEmojiTextParser *emojiParser;
@property (retain, nonatomic) IESLivePinCommentNode *node;
@property (weak, nonatomic) id<IESLivePinCommentCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)disableHostLocalizationsWithLabel:(id)a0;
- (void)showOperateArea:(BOOL)a0;
- (void)configWithNode:(id)a0 containerWidth:(double)a1;
- (void)setupSubViews;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;

@end
