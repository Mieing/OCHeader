@class NSDictionary, NSString;

@interface AWEAdContextManager : HTSService <AWEAdContextManager>

@property (copy, nonatomic) NSDictionary *anchorComplianceData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awemeModel;
- (id)logExtraDict;
- (id)SKANParamsString;
- (id)adID;
- (BOOL)isDouPlusVideo;
- (id)getAnchorComplianceData;
- (id)logExtraStr;
- (id)extraAdTypeString;
- (void)setAnchorComplianceDataWith:(id)a0;
- (void)checkProtocolOTabBarController:(id)a0;
- (void)checkProtocolOfSlidingVC:(id)a0;
- (void)checkProtocolOfNavigationController:(id)a0;
- (id)testIfTabBarVCAndGetSelected:(id)a0;
- (id)testIfSlidingVCAndGetSelected:(id)a0;
- (id)testIfNavigationVCAndGetCarrier:(id)a0;
- (id)findNearestAdVC;
- (void).cxx_destruct;
- (id)groupID;
- (id)downloadURL;
- (BOOL)isAd;
- (id)creativeID;
- (id)authorId;

@end
