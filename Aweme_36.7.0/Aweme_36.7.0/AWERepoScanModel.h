@class NSString, NSDictionary, NSArray;
@protocol ACCPublishRepository;

@interface AWERepoScanModel : NSObject <AWERepositoryDraftProtocol, ACCRepositoryDraftContextDeprecated, ACCRepositoryRequestParamsDeprecated, ACCRepositoryTrackContextDeprecated, NSCopying, ACCRepositoryContextDeprecated>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL cameraJumpScanMode;
@property (nonatomic) BOOL scanToScanRecord;
@property (nonatomic) BOOL scanToQuestionRecord;
@property (nonatomic) BOOL scanToQRCodeRecord;
@property (copy, nonatomic) NSString *landingTab;
@property (nonatomic) unsigned long long scanBalanceStatus;
@property (nonatomic) BOOL dyCodeEnter;
@property (copy, nonatomic) NSString *tosImageId;
@property (nonatomic) BOOL dontScanResult;
@property (nonatomic) unsigned long long openEditType;
@property (retain, nonatomic) NSDictionary *searchScanData;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSArray *scanResults;
@property (nonatomic) BOOL enterEditPageOrSearchPage;
@property (nonatomic) unsigned long long enterScanModeTimeInterval;
@property (copy, nonatomic) NSString *editScanRealityTypeFirstNameList;
@property (copy, nonatomic) NSString *editScanRealityTagNameList;
@property (retain, nonatomic) NSDictionary *scanTrackMap;
@property (copy, nonatomic) NSString *scanType;
@property (copy, nonatomic) NSString *realityId;
@property (nonatomic) BOOL enableObject;
@property (nonatomic) BOOL enableARImage;
@property (nonatomic) BOOL enablePublish;
@property (nonatomic) BOOL enableAlbum;
@property (nonatomic) BOOL enableBackMain;
@property (nonatomic) BOOL enableBackMainCameraOutside;
@property (nonatomic) BOOL jsbEnterScanPage;
@property (nonatomic) BOOL jsbAutoJump;
@property (nonatomic) BOOL jsbEnableAnalysis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCPublishRepository> repoDeprecated;

@end
