@class NSString;

@interface AWEInTodaySchemaUIConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *playerTitle;
@property (copy, nonatomic) NSString *playerSubTitle;
@property (copy, nonatomic) NSString *playerEmptyText;
@property (copy, nonatomic) NSString *publishBtnText;
@property (copy, nonatomic) NSString *guideVideoName;
@property (copy, nonatomic) NSString *guideBtnAgree;
@property (copy, nonatomic) NSString *guideBtnRefuse;
@property (nonatomic) BOOL playerHideMenu;
@property (copy, nonatomic) NSString *agreementLink;
@property (copy, nonatomic) NSString *landingType;
@property (copy, nonatomic) NSString *landingID;
@property (copy, nonatomic) NSString *guideTitle;
@property (copy, nonatomic) NSString *guideHintText;
@property (copy, nonatomic) NSString *aggregatingText;
@property (copy, nonatomic) NSString *aggregatingProgressText;
@property (copy, nonatomic) NSString *aggregatingTextTips;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
