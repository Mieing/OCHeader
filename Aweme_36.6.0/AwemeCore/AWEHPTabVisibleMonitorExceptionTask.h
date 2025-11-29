@class NSArray, AWEHPTabSetVisibleSceneModel, NSString;

@interface AWEHPTabVisibleMonitorExceptionTask : NSObject

@property (readonly, nonatomic) long long taskID;
@property (nonatomic) unsigned long long timingType;
@property (copy, nonatomic) NSArray *contextList;
@property (nonatomic) unsigned long long topbarInvisibleType;
@property (nonatomic) unsigned long long tabbarInvisibleType;
@property (retain, nonatomic) AWEHPTabSetVisibleSceneModel *lastBottomTabHiddenScene;
@property (retain, nonatomic) AWEHPTabSetVisibleSceneModel *lastBottomTabAlphaScene;
@property (retain, nonatomic) AWEHPTabSetVisibleSceneModel *lastTopTabHiddenScene;
@property (retain, nonatomic) AWEHPTabSetVisibleSceneModel *lastTopTabAlphaScene;
@property (nonatomic) BOOL isDoubleChecking;
@property (nonatomic) unsigned long long continuousExceptionCount;
@property (nonatomic) BOOL hasReport;
@property (copy, nonatomic) NSString *topVCChannelID;

- (BOOL)isSceneID:(id)a0 equalTo:(id)a1;
- (BOOL)isSameSceneWithTask:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
