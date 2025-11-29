@class NSMutableDictionary, HTSEventContext, NSString, IESLiveGuideDot, NSNumber;
@protocol IESLiveTracker;

@interface IESLiveGuideDotManager : NSObject <IESLiveGuideDotManagerProvider, IESLiveGuideDotEventTracker>

@property (retain, nonatomic) IESLiveGuideDot *root;
@property (retain, nonatomic) NSMutableDictionary *guideDotMap;
@property (nonatomic) long long redDotShowCount;
@property (nonatomic) long long showVersionForUpgrade;
@property (nonatomic) long long showVersionForInstall;
@property (nonatomic) BOOL isAnchor;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (retain, nonatomic) id<IESLiveTracker> tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)p_isPureInteger:(id)a0;

- (void)registerGuideDot:(id)a0;
- (id)initWithRootID:(id)a0;
- (BOOL)shouldShowRedDotWithID:(id)a0;
- (BOOL)redDotDidDisplayWithID:(id)a0;
- (void)setRedDotWithID:(id)a0 hidden:(BOOL)a1;
- (void)trackSpotShowWith:(id)a0;
- (void)trackSpotClickWith:(id)a0;
- (id)hasAudienceDouPlusHideRedHotKey;
- (id)popularityGemRedDotKey;
- (id)guideDotWithID:(id)a0;
- (void)p_transformGuideDotList:(id)a0 toTree:(id)a1;
- (id)p_getGuideDotCountKeyWith:(id)a0;
- (BOOL)showRedDotWithID:(id)a0;
- (long long)p_currentSDKVersion;
- (void)p_trackSpotOverTimeWith:(id)a0;
- (BOOL)p_isFirstInstall;
- (id)p_brotherDotListWith:(id)a0;
- (void).cxx_destruct;
- (void)reset;

@end
