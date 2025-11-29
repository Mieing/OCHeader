@class NSString;

@interface AWEGameCPTrackContextUtility : NSObject <AWEGameCPTrackContextInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)util;

- (id)getReportParamsWith:(id)a0 gameId:(id)a1 enterMethod:(id)a2 enterSubMethod:(id)a3 promoteSceneSub:(id)a4 gameInfoMsg:(id)a5;
- (id)getTrackContextWith:(id)a0 gameId:(id)a1 enterMethod:(id)a2 enterSubMethod:(id)a3 promoteSceneSub:(id)a4 gameInfoMsg:(id)a5;

@end
