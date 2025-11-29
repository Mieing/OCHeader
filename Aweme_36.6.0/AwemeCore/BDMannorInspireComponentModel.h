@class NSString, NSDictionary, NSArray, NSNumber;

@interface BDMannorInspireComponentModel : MTLModel <MTLJSONSerializing, BDMannorStyleTemplateComponentDataProtocol>

@property (copy, nonatomic) NSDictionary *inspireAdInfo;
@property (copy, nonatomic) NSDictionary *author;
@property (copy, nonatomic) NSDictionary *buttonList;
@property (nonatomic) BOOL cardHideAdInfo;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *sdkAbtestParams;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *webTitle;
@property (retain, nonatomic) NSNumber *showDislike;
@property (nonatomic) long long webUrlType;
@property (copy, nonatomic) NSArray *genericBenefits;
@property (copy, nonatomic) NSDictionary *audio;
@property (copy, nonatomic) NSArray *imageList;
@property (copy, nonatomic) NSDictionary *video;
@property (copy, nonatomic) NSArray *appCategory;
@property (copy, nonatomic) NSString *appData;
@property (copy, nonatomic) NSDictionary *appDownloadInfo;
@property (copy, nonatomic) NSString *appInstall;
@property (nonatomic) long long appInstallOrigin;
@property (copy, nonatomic) NSString *appLike;
@property (copy, nonatomic) NSDictionary *appPkgInfo;
@property (nonatomic) long long downloadMode;
@property (copy, nonatomic) NSString *downloadUrl;
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) NSArray *labelIconList;
@property (copy, nonatomic) NSDictionary *recmdTags;
@property (copy, nonatomic) NSDictionary *recmdText;
@property (copy, nonatomic) NSDictionary *liveRoom;
@property (copy, nonatomic) NSString *rawLive;
@property (copy, nonatomic) NSString *liveActionExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
