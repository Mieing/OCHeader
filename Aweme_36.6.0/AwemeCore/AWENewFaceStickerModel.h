@class AWEURLModel, NSString, NSArray, AWEWelfareActivityModel, AWECommerceStickerDetailModel, AWECodeGenLeftCustomBtnConfigModel, AWERecordInspirationDetail;

@interface AWENewFaceStickerModel : AWEStickerDetailModel

@property (copy, nonatomic) AWERecordInspirationDetail *inspirationDetail;
@property (copy, nonatomic) NSString *effectID;
@property (nonatomic) BOOL isFavorited;
@property (copy, nonatomic) NSArray *childrenStickersIDs;
@property (copy, nonatomic) AWECommerceStickerDetailModel *commerceSticker;
@property (retain, nonatomic) AWEURLModel *activityIconURL;
@property (copy, nonatomic) NSString *activityOpenURL;
@property (copy, nonatomic) NSString *cardID;
@property (copy, nonatomic) NSString *activityWebviewTitle;
@property (copy, nonatomic) NSString *activityEntranceText;
@property (retain, nonatomic) AWEURLModel *activityEntranceIcon;
@property (retain, nonatomic) AWEWelfareActivityModel *welfareActivityModel;
@property (retain, nonatomic) NSArray *similarPropArray;
@property (nonatomic) long long designerFollowStatus;
@property (nonatomic) BOOL isStickerAsTemplate;
@property (retain, nonatomic) AWEURLModel *effectCover;
@property (retain, nonatomic) AWECodeGenLeftCustomBtnConfigModel *leftCustomBtnConfig;

+ (id)welfareActivityModelJSONTransformer;
+ (id)commerceStickerJSONTransformer;
+ (id)similarPropArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
