@class AWEProfileExtensionAreaCardModel, AWEUserModel, NSDictionary, UILabel, UIView, BDImageView;
@protocol AWEECProfileExtensionAreaCardDelegate;

@interface AWEECProfileExtensionAreaCard : UIView

@property (retain, nonatomic) BDImageView *leftImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIView *dotView;
@property (retain, nonatomic) AWEProfileExtensionAreaCardModel *cardModel;
@property (copy, nonatomic) NSDictionary *cardData;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (nonatomic) BOOL hasUnread;
@property (nonatomic) double cardWidth;
@property (nonatomic) unsigned long long cardIndex;
@property (nonatomic) BOOL isOrderCard;
@property (nonatomic) BOOL isIconRepeat;
@property (copy, nonatomic) NSDictionary *extraInfoDict;
@property (copy, nonatomic) id /* block */ didTapCardViewBlock;
@property (weak, nonatomic) id<AWEECProfileExtensionAreaCardDelegate> delegate;

- (void)cardWillAppear;
- (void)cardDidDisappear;
- (double)widthOfCard;
- (BOOL)shouldShowDot;
- (BOOL)userIsMaster;
- (void)configHasUnread;
- (void)viewTapped;
- (void)updateViewWithShowDot:(BOOL)a0;
- (void)updateOrderToast;
- (id)initWithUserModel:(id)a0 cardModel:(id)a1 extraInfoDict:(id)a2 cardIndex:(unsigned long long)a3 cardData:(id)a4 isOrderCard:(BOOL)a5 isIconRepeat:(BOOL)a6 didTapCardViewBlock:(id /* block */)a7;
- (BOOL)isDotViewHidden;
- (void).cxx_destruct;
- (id)init;
- (void)updateView;
- (void)setupUI;

@end
