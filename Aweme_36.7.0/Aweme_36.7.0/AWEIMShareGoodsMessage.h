@class NSString, NSDictionary, NSNumber, AWEURLModel;

@interface AWEIMShareGoodsMessage : AWEIMMessage <AWEIMShareGoodsCardModel, AWEIMMsgRefreshMessageProtocol, AWEIMMessageConfigProtocol>

@property (retain, nonatomic) AWEURLModel *iconURLModel;
@property (retain, nonatomic) AWEURLModel *avatarURLModel;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *price;
@property (retain, nonatomic) NSNumber *sales;
@property (nonatomic) long long itemCount;
@property (retain, nonatomic) NSString *productId;
@property (retain, nonatomic) NSString *promotionId;
@property (retain, nonatomic) NSString *userId;
@property (retain, nonatomic) NSString *secUserId;
@property (retain, nonatomic) NSString *itemId;
@property (retain, nonatomic) NSString *pushDetail;
@property (copy, nonatomic) NSString *shopGuideId;
@property (retain, nonatomic) NSDictionary *requestAdditions;
@property (copy, nonatomic) NSDictionary *ecomShareTrackParams;
@property (retain, nonatomic) NSString *chatGoodsSchema;
@property (retain, nonatomic) NSNumber *maxPrice;
@property (retain, nonatomic) NSNumber *minPrice;
@property (retain, nonatomic) NSNumber *discountPrice;
@property (retain, nonatomic) NSNumber *regularPrice;
@property (retain, nonatomic) NSString *priceDesc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewModelClass;

- (id)getUniqueResourceId;
- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (BOOL)isAllowedEmojiReply;
- (BOOL)shouldShowNicknameWithMessageType;
- (BOOL)isAllowedForward;
- (BOOL)isSupportForward;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
