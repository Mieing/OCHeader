@class NSString, AWEProfileSmartPhoneListModel, AWEProfileOpenTimeModel;

@interface AWEProfileLinkModel : AWEBaseApiModel

@property (retain, nonatomic) AWEProfileSmartPhoneListModel *cacheSmartPhoneListModel;
@property (retain, nonatomic) AWEProfileOpenTimeModel *cacheOpenTimeModel;
@property (nonatomic) long long linkType;
@property (nonatomic) unsigned long long subType;
@property (nonatomic) long long confType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *darkImageUrl;
@property (copy, nonatomic) NSString *lightImageUrl;
@property (copy, nonatomic) NSString *lightTextColor;
@property (copy, nonatomic) NSString *darkTextColor;
@property (copy, nonatomic) NSString *lightBGColor;
@property (copy, nonatomic) NSString *darkBGColor;
@property (copy, nonatomic) NSString *mobParamsStr;
@property (nonatomic) BOOL disableEnterEditPage;
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

- (id)openTimeModel;
- (id)smartPhoneList;
- (void).cxx_destruct;

@end
