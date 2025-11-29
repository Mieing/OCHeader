@class NSString;

@interface AnchorDetailPageInfoV2 : GPBMessage

@property (nonatomic) int panelHeight;
@property (nonatomic) BOOL hasPanelHeight;
@property (copy, nonatomic) NSString *detailPageTitle;
@property (nonatomic) BOOL hasDetailPageTitle;
@property (copy, nonatomic) NSString *detailPageDesc;
@property (nonatomic) BOOL hasDetailPageDesc;
@property (copy, nonatomic) NSString *lynxInfo;
@property (nonatomic) BOOL hasLynxInfo;
@property (copy, nonatomic) NSString *appName;
@property (nonatomic) BOOL hasAppName;
@property (copy, nonatomic) NSString *navTitle;
@property (nonatomic) BOOL hasNavTitle;

+ (id)descriptor;

@end
