@class NSString, NSDictionary;

@interface AWEAfterLiveFollowPushGuideManager : NSObject <AWEUGPushGuideByPitayaExecutorDelegate>

@property (copy, nonatomic) NSString *currentSelectionInfo;
@property (copy, nonatomic) NSString *currentGroupID;
@property (copy, nonatomic) NSDictionary *psortTrackerInfo;
@property (nonatomic) BOOL hasShowPopupView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)showPitayaPushGuide:(id)a0;
- (void)registerLiveFollowGuideByPitaya;
- (void).cxx_destruct;

@end
