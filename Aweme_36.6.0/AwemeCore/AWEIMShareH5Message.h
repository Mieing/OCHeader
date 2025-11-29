@class NSString, NSDictionary, NSArray;

@interface AWEIMShareH5Message : AWEIMMessage <AWEIMMessageConfigProtocol, AWEIMMsgRefreshMessageProtocol, AWEIMSpecialEffectAnimateProtocol>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *coverURL;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *linkURL;
@property (copy, nonatomic) NSString *linkURLV2;
@property (copy, nonatomic) NSString *linkURLV2Version;
@property (copy, nonatomic) NSString *pushDetail;
@property (copy, nonatomic) NSDictionary *timorInfo;
@property (nonatomic) BOOL isCard;
@property (copy, nonatomic) NSDictionary *adExtraData;
@property (nonatomic) unsigned long long saiyanEventStyle;
@property (copy, nonatomic) NSString *hint;
@property (copy, nonatomic) NSString *msgTrack;
@property (copy, nonatomic) NSString *uiExtra;
@property (copy, nonatomic) NSString *bgURL;
@property (nonatomic) BOOL disableForward;
@property (copy, nonatomic) NSString *bigPicURLString;
@property (copy, nonatomic) NSString *smallIconURLString;
@property (copy, nonatomic) NSString *activitySloganString;
@property (copy, nonatomic) NSString *shareIdString;
@property (copy, nonatomic) NSString *sceneTypeString;
@property (copy, nonatomic) NSString *effectID;
@property (copy, nonatomic) NSDictionary *uiExtraDict;
@property (copy, nonatomic) NSDictionary *imExtra;
@property (copy, nonatomic) NSString *groupBuyName;
@property (copy, nonatomic) NSString *typeName;
@property (copy, nonatomic) NSString *price;
@property (copy, nonatomic) NSString *discountPrice;
@property (copy, nonatomic) NSArray *coverUrls;
@property (copy, nonatomic) NSString *productId;
@property (nonatomic) long long source;
@property (copy, nonatomic) NSDictionary *ecomShareTrackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewModelClass;

- (id)getUniqueResourceId;
- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (id)generateForwardMessage;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (BOOL)isAllowedEmojiReply;
- (BOOL)needTrackNovelCard;
- (BOOL)canShowSpecialEffect;
- (BOOL)shouldShowNicknameWithMessageType;
- (id)getSyncedExtDict;
- (BOOL)isAllowedForward;
- (BOOL)shouldUseRefreshData;
- (BOOL)isSupportForward;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)poiId;

@end
