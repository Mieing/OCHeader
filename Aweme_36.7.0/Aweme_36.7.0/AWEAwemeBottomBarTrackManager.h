@class NSString, NSDictionary, AWEAwemeModel, NSObject;

@interface AWEAwemeBottomBarTrackManager : NSObject <AWEAwemeBottomBarTrackManagerProtocol>

@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSString *currentTrackBarID;
@property (nonatomic) double barClickTimeForFalseTouch;
@property (weak, nonatomic) AWEAwemeModel *enterModelForFalseTouch;
@property (retain, nonatomic) NSString *referStringForFalseTouch;
@property (nonatomic) long long barTypeForFalseTouch;
@property (weak, nonatomic) NSObject *clickEnterObjectForFalseTouch;
@property (retain, nonatomic) NSDictionary *extraParamsForFalseTouch;
@property (weak, nonatomic) NSObject *clickEnterObject;
@property (copy, nonatomic) NSString *currentReferString;
@property (copy, nonatomic) NSString *currentGroupID;
@property (nonatomic) long long currentTrackType;
@property (nonatomic) double barStayStartTime;
@property (copy, nonatomic) NSString *hasFullyDisplayed;
@property (copy, nonatomic) NSString *commentTrackClickId;
@property (nonatomic) double commentTrackClickStartTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)trackFalseTouchByType:(long long)a0 referString:(id)a1 model:(id)a2 clickEnterObject:(id)a3 extraParams:(id)a4;
- (void)trackStayTime;
- (void)trackShowByType:(long long)a0 referString:(id)a1 model:(id)a2;
- (void)trackClickByType:(long long)a0 referString:(id)a1 model:(id)a2 extraParams:(id)a3;
- (void)trackClickByType:(long long)a0 referString:(id)a1 model:(id)a2 extraParams:(id)a3 clickEnterObject:(id)a4;
- (void)trackShowByType:(long long)a0 referString:(id)a1 model:(id)a2 extraParams:(id)a3;
- (void)resetIfNeededWithSelf:(id)a0;
- (long long)getTypeByBarName:(id)a0;
- (id)paramsForShowByType:(long long)a0 referString:(id)a1 model:(id)a2;
- (id)paramsForShowClickByType:(long long)a0 referString:(id)a1 authorID:(id)a2 groupID:(id)a3;
- (id)bottomBarClickTransmissionParams;
- (id)paramsForStayTimeByType:(long long)a0 referString:(id)a1 groupID:(id)a2 duration:(long long)a3;
- (BOOL)currentBarEnableProgressFalseTouchWithReferString:(id)a0 type:(long long)a1;
- (id)getBarNameByType:(long long)a0;
- (id)searchBarParamsByID:(id)a0 referString:(id)a1 model:(id)a2;
- (void)trackWithEventName:(id)a0 barID:(id)a1 referString:(id)a2 model:(id)a3 extraParams:(id)a4;
- (id)commonParamsWithBarName:(id)a0 referString:(id)a1 model:(id)a2;
- (void)trackClickByType:(long long)a0 referString:(id)a1 authorID:(id)a2 groupID:(id)a3 clickEnterObject:(id)a4;
- (void)trackFalseTouchWithObject:(id)a0;
- (void)trackShowByID:(id)a0 referString:(id)a1 model:(id)a2 extraInfo:(id)a3;
- (void)trackClickByID:(id)a0 referString:(id)a1 model:(id)a2 extraInfo:(id)a3 clickEnterObject:(id)a4;
- (id)paramsForLongVideoShowByType:(long long)a0 referString:(id)a1 model:(id)a2;
- (void).cxx_destruct;

@end
