@class NSString, NSArray, AWEAwemeModel, UIView, AWEUserModel, NSDictionary;
@protocol AWECompanyLinkAreaViewDelegate;

@interface AWECompanyLinkAreaView : UIView <AWECompanyLinkAreaView>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *refer;
@property (copy, nonatomic) NSArray *linkList;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) long long scene;
@property (retain, nonatomic) NSString *challengeID;
@property (weak, nonatomic) id<AWECompanyLinkAreaViewDelegate> delegate;
@property (nonatomic) double realWidth;
@property (nonatomic) double realHeight;
@property (nonatomic) double hitTestBottomExpand;
@property (copy, nonatomic) NSDictionary *trackerParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isNewProfileUIStyle;
+ (BOOL)isSame:(id)a0 with:(id)a1;
+ (id)createBtnWithLink:(id)a0 width:(double)a1 height:(double)a2 pointX:(double)a3 pointY:(double)a4 index:(long long)a5 font:(id)a6 scene:(long long)a7 titleColor:(id)a8;
+ (void)trackEventWithTag:(id)a0 linkModel:(id)a1 referString:(id)a2 userID:(id)a3 attributes:(id)a4 awemeModel:(id)a5 userModel:(id)a6 commonTrackDict:(id)a7;
+ (void)openLink:(id)a0 refer:(id)a1 challengeId:(id)a2 smartPhoneModel:(id)a3 awemeModel:(id)a4 secUserID:(id)a5;
+ (void)trackEventWithTag:(id)a0 linkModel:(id)a1 relatedComponentValue:(id)a2 referString:(id)a3 userID:(id)a4 attributes:(id)a5 awemeModel:(id)a6 userModel:(id)a7 commonTrackDict:(id)a8;
+ (id)getIconForLink:(long long)a0 inScene:(long long)a1;
+ (id)createBtnWithImage:(id)a0 title:(id)a1 width:(double)a2 height:(double)a3 pointX:(double)a4 pointY:(double)a5 index:(long long)a6 font:(id)a7 scene:(long long)a8 titleColor:(id)a9;
+ (id)buttonTitleColorForScene:(long long)a0;
+ (id)buttonBackgroundColorForScene:(long long)a0;
+ (void)setupEdgeInsetsForButton:(id)a0;
+ (id)makeSmartPhoneConfigWithCommonPhone:(id)a0 awemeModel:(id)a1 secUserModel:(id)a2;
+ (void)trackEventWithTag:(id)a0 link:(long long)a1 subtype:(unsigned long long)a2 trackerLinkType:(id)a3 relatedComponentValue:(id)a4 referString:(id)a5 userID:(id)a6 attributes:(id)a7 awemeModel:(id)a8 userModel:(id)a9 commonTrackDict:(id)a10;
+ (id)joinEnterpriseParamsIfNeeded:(id)a0 aweme:(id)a1;
+ (void)transferToWebView:(id)a0 refer:(id)a1 eventID:(id)a2 creativeID:(id)a3 logExtra:(id)a4;
+ (id)makeAddInfoButton;
+ (id)getIconNameForLink:(long long)a0 inScene:(long long)a1;
+ (id)createBtnWithImage:(id)a0 title:(id)a1 width:(double)a2 height:(double)a3 pointX:(double)a4 pointY:(double)a5 index:(long long)a6 font:(id)a7 scene:(long long)a8;
+ (void)callSmartPhoneWithCommonPhone:(id)a0 awemeModel:(id)a1 secUserModel:(id)a2;
+ (double)widthForLinkTitle:(id)a0;

- (double)configWithLinkList:(id)a0 awemeModel:(id)a1 userID:(id)a2 isLogSent:(BOOL)a3 inScene:(long long)a4 needBackground:(BOOL)a5;
- (double)configWithLinkList:(id)a0 awemeModel:(id)a1 userModel:(id)a2 userID:(id)a3 isLogSent:(BOOL)a4 inScene:(long long)a5 isCurrentUser:(BOOL)a6 needBackground:(BOOL)a7;
- (double)configWithLinkList:(id)a0 awemeModel:(id)a1 userModel:(id)a2 userID:(id)a3 isLogSent:(BOOL)a4 inScene:(long long)a5 isCurrentUser:(BOOL)a6 needBackground:(BOOL)a7 titleColor:(id)a8;
- (double)checkCurrentUser:(BOOL)a0 scene:(long long)a1 linkList:(id)a2;
- (id)challengeSceneFont;
- (double)challengeSceneButtonWidth;
- (BOOL)linkListShouldDotTruncation;
- (BOOL)linkTypeCanEdit:(long long)a0;
- (void)enterBusinessEditPage:(id)a0;
- (void)linkLabelClicked:(id)a0;
- (void)p_trackGameDownloadIfNeededWithLinkModel:(id)a0 forShow:(BOOL)a1;
- (void)showEditButtonAtPointX:(double)a0 pointY:(double)a1;
- (void)_linkLabelClicked:(id)a0 openLink:(BOOL)a1;
- (id)getRelatedComponentValue:(id)a0;
- (double)configWithLinkList:(id)a0 awemeModel:(id)a1 userID:(id)a2 isLogSent:(BOOL)a3 inScene:(long long)a4;
- (double)configWithLinkList:(id)a0 awemeModel:(id)a1 userModel:(id)a2 userID:(id)a3 isLogSent:(BOOL)a4 inScene:(long long)a5 isCurrentUser:(BOOL)a6;
- (void)setupActionForScene:(long long)a0 button:(id)a1 isCurrentUser:(BOOL)a2;
- (void).cxx_destruct;

@end
