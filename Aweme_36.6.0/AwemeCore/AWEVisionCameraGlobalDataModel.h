@class NSDictionary, NSString;

@interface AWEVisionCameraGlobalDataModel : NSObject <AWEVisionCameraGlobalDataModelStudioProxy>

@property (copy, nonatomic) NSDictionary *originRouterParams;
@property (copy, nonatomic) NSString *previousPageEnterFrom;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *previousPage;
@property (nonatomic) BOOL dyCodeEnter;
@property (copy, nonatomic) NSString *landingTab;
@property (nonatomic) BOOL enableObject;
@property (nonatomic) BOOL enableARImage;
@property (nonatomic) BOOL enableAlbum;
@property (nonatomic) BOOL jsbEnterScanPage;
@property (nonatomic) BOOL jsbAutoJump;
@property (nonatomic) BOOL jsbEnableAnalysis;
@property (nonatomic) unsigned long long scanBalanceStatus;
@property (nonatomic) BOOL scanToScanRecord;
@property (nonatomic) BOOL scanToQuestionRecord;
@property (nonatomic) BOOL scanToQRCodeRecord;
@property (copy, nonatomic) NSString *scanType;
@property (copy, nonatomic) NSString *realityId;
@property (nonatomic) unsigned long long enterScanModeTimeInterval;
@property (nonatomic) BOOL flashLightChanged;
@property (nonatomic) BOOL recordHandlerCloseTorch;
@property (nonatomic) BOOL currentFlashLightIsOn;
@property (nonatomic) BOOL enterEditPageOrSearchPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)currentTabTrackName;
- (void).cxx_destruct;
- (id)init;

@end
