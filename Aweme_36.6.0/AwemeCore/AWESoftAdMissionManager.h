@class NSString;

@interface AWESoftAdMissionManager : HTSService <AWESoftAdMissionManager>

@property (nonatomic) double enterTime;
@property (nonatomic) double stayTime;
@property (nonatomic) double startInactiveTime;
@property (nonatomic) double inactiveStayTime;
@property (nonatomic) double finalStayTime;
@property (nonatomic) BOOL isAlive;
@property (nonatomic) BOOL pageViewTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startPageView;
- (void)finishPageView;
- (BOOL)whetherBackToSoftAdMission;
- (void)setSoftAdMissionIsAlive:(BOOL)a0;
- (BOOL)softAdMissionIsAlive;
- (void)setComeInTask:(BOOL)a0;
- (BOOL)comeInTask;
- (void)didBecomeActive;
- (void)willResignActive;
- (void)resetAllData;

@end
