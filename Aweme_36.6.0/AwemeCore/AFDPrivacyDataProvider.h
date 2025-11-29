@class NSDictionary, NSArray;

@interface AFDPrivacyDataProvider : NSObject

@property (retain, nonatomic) NSDictionary *sceneConfig;
@property (retain, nonatomic) NSArray *privacyMapWhiteList;
@property (retain, nonatomic) NSArray *videoSafetyCheckWhiteList;

+ (id)sharedInstance;

- (BOOL)isIllegalAwemeForPlayCheck:(id)a0 originalResult:(BOOL)a1 sceneString:(id)a2;
- (unsigned long long)privacyTypeFromScene:(id)a0 isStory:(BOOL)a1;
- (BOOL)privacyMapWhiteList:(id)a0;
- (id)paramsWithUser:(id)a0 originalResult:(BOOL)a1;
- (BOOL)isIllegalUserWithUserID:(id)a0 privacyType:(unsigned long long)a1 trackService:(id)a2 extraDict:(id)a3;
- (id)illegalPrivacyResponseForAweme:(id)a0 originalResult:(BOOL)a1 scene:(unsigned long long)a2;
- (id)awemeModelsSceneStringWithScene:(unsigned long long)a0;
- (id)paramsWithAweme:(id)a0 originalResult:(BOOL)a1;
- (id)illegalPrivacyResponseWithUserID:(id)a0 privacyType:(unsigned long long)a1 trackService:(id)a2 extraDict:(id)a3;
- (BOOL)videoSafetyCheckWhiteList:(id)a0;
- (BOOL)enablePrivacyDoubleCheck:(unsigned long long)a0;
- (BOOL)isIllegalUserForPrivacyMap:(id)a0 originalResult:(BOOL)a1 scene:(long long)a2;
- (BOOL)isIllegalRecommendUserForPrivacyMap:(id)a0 originalResult:(BOOL)a1;
- (BOOL)isIllegalAwemeForPrivacyMap:(id)a0 originalResult:(BOOL)a1 scene:(unsigned long long)a2;
- (void)doubleCheckAwemeList:(id)a0 illegalResults:(id)a1 scene:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)setupData;

@end
