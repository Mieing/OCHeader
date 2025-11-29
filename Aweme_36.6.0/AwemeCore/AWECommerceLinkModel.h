@class AWECommerceSmartPhoneListModel, AWEOpenTimeModel, NSString;

@interface AWECommerceLinkModel : AWEBaseApiModel

@property (retain, nonatomic) AWECommerceSmartPhoneListModel *cacheCommerceSmartPhoneListModel;
@property (retain, nonatomic) AWEOpenTimeModel *cacheOpenTimeModel;
@property (nonatomic) long long linkType;
@property (nonatomic) unsigned long long subType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *webTitle;
@property (copy, nonatomic) NSString *trackerLinkType;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *SKANParamsString;
@property (copy, nonatomic) NSString *linkTitle;
@property (copy, nonatomic) NSString *complianceData;
@property (nonatomic) BOOL isReplaced;
@property (copy, nonatomic) NSString *fallbackDownloadAction;
@property (copy, nonatomic) NSString *fallbackWebOpenAction;

+ (id)linkTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)commerceSmartPhoneList;
- (id)openTimeModel;
- (void).cxx_destruct;

@end
