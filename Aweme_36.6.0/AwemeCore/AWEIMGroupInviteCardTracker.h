@class NSDictionary, NSMutableSet, NSMutableDictionary;

@interface AWEIMGroupInviteCardTracker : NSObject

@property (retain, nonatomic) NSMutableSet *trackedEvents;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSDictionary *groupParams;
@property (retain, nonatomic) NSMutableDictionary *durations;
@property (copy, nonatomic) NSDictionary *verificationParams;
@property (nonatomic) BOOL didClickJoinGroup;

- (id)requestParamSecretType;
- (id)p_groupQosJoinGroupStart;
- (id)p_groupQosJoinGroupPrepare;
- (id)p_trackPanelTypeOfCardType:(long long)a0;
- (id)p_enterFromParam;
- (id)p_cardTypeToEnterFromMap;
- (id)initWithType:(long long)a0 groupParams:(id)a1;
- (void)markJoinGroupStartAndPrepare;
- (void)trackJoinGroupStartWithResult:(id)a0;
- (void)trackJoinGroupPrepare;
- (void)markClickJoinGroup;
- (void)trackJoinGroupQuit;
- (void).cxx_destruct;

@end
