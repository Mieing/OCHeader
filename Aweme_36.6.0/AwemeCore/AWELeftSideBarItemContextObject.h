@class NSString;

@interface AWELeftSideBarItemContextObject : NSObject <AWELeftSideBarItemContext, AWEHPListKitItemControllerContext>

@property (copy, nonatomic) NSString *businessId;
@property (copy, nonatomic) NSString *businessType;
@property (copy, nonatomic) NSString *moduleID;
@property (copy, nonatomic) NSString *modulePos;
@property (copy, nonatomic) NSString *moduleType;
@property (copy, nonatomic) NSString *sideBarIdentifer;
@property (nonatomic) long long pageLevel;
@property (nonatomic) BOOL isDynamic;
@property (nonatomic) long long themeMode;
@property (nonatomic) long long themeType;
@property (nonatomic) double cellWidth;
@property (nonatomic) double containerCornerRadius;
@property (readonly, nonatomic) double leftSideBarWidth;
@property (readonly, nonatomic) double leftSideBarHorizontalPadding;
@property (nonatomic) BOOL moduleShowCloseButton;
@property (nonatomic) long long moduleShowThreshold;
@property (nonatomic) unsigned long long moduleFooterStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateContextData:(id)a0 businessType:(id)a1 moduleType:(id)a2 sideBarIdentifer:(id)a3 themeMode:(long long)a4 themeType:(long long)a5 cellWidth:(double)a6 containerCornerRadius:(double)a7 leftSideBarWidth:(double)a8 leftSideBarHorizontalPadding:(double)a9;
- (void).cxx_destruct;

@end
