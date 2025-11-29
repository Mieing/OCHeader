@class NSString, NSMapTable;

@interface AWEAwemeSpeedManager : NSObject <AWEAwemeSpeedManagerProtocol>

@property (retain, nonatomic) NSMapTable *mixVideoSpeedInheritedConfigTable;
@property (copy, nonatomic) NSString *currentSpeed;
@property (copy, nonatomic) NSString *currentItemId;
@property (copy, nonatomic) NSString *currentLockedSpeedItemId;
@property (nonatomic) struct CGPoint { double x; double y; } speedCenter;
@property (nonatomic) double currentSpeedInMixVideo;
@property (nonatomic) double currentSpeedInInterestDiscover;
@property (nonatomic) double currentSpeedInHomepage;
@property (copy, nonatomic) NSString *currentItemIDInMixVideo;
@property (copy, nonatomic) NSString *currentItemIDInInterestDiscover;
@property (copy, nonatomic) NSString *currentReferstringInPerson;
@property (copy, nonatomic) NSString *currentAuthorIdInPerson;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareManager;

- (void)updateSpeed:(id)a0;
- (void)adjustCurrentSpeedwithFloatValue:(double)a0;
- (void)recordMixVideoSpeedInheritedViewController:(id)a0 withPreviousPage:(id)a1;
- (void)resetSpeedInMixVideoIfNeedFromInheritedViewController:(id)a0;
- (BOOL)addSpeedManagerLog;
- (BOOL)isNeedRecordMixVideoSpeedForReferString:(id)a0;
- (void)resetSpeedInMixVideo;
- (void)adjustSpeedWithCurrentSpeed:(double)a0;
- (void)resetSpeedInHomepage;
- (void)resetSpeedInInterestDiscover;
- (BOOL)isNeedRecordInterestDiscoverSpeedForReferString:(id)a0;
- (BOOL)shouldResetSpeedManageInfoInHomepageWithModelReferString:(id)a0 andAuthorId:(id)a1;
- (void)resetSpeedControl;
- (void).cxx_destruct;

@end
