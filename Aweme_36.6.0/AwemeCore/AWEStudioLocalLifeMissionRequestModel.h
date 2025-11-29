@class NSString, NSDictionary, NSArray, AWEStudioLocalLifeNoticeToastModel;

@interface AWEStudioLocalLifeMissionRequestModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *entranceIconUrl;
@property (copy, nonatomic) NSString *entranceText;
@property (copy, nonatomic) NSString *entranceSubTitle;
@property (copy, nonatomic) NSString *entranceUrl;
@property (copy, nonatomic) NSString *lifeAccountId;
@property (copy, nonatomic) NSString *authorType;
@property (copy, nonatomic) NSDictionary *searchSpuTabInfo;
@property (nonatomic) BOOL hasPermission;
@property (copy, nonatomic) NSArray *noticePopup;
@property (retain, nonatomic) AWEStudioLocalLifeNoticeToastModel *noticeToast;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)noticePopupJSONTransformer;
+ (id)noticeToastJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
