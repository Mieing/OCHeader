@class NSDictionary, NSString;

@interface IESLLLiveTrackUtils : NSObject <IESLLLiveTrackerUtilsProtocol>

@property (copy, nonatomic) NSDictionary *awemeInfo;
@property (copy, nonatomic) NSDictionary *liveRoomInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedUtils;

- (id)lifeInitialInfo;
- (id)logExtraTrackKey;
- (id)cidTrackKey;
- (void)updateAwemeInfo:(id)a0 liveInfo:(id)a1;
- (id)addLiveInfo:(id)a0 toLifeExtraInfo:(id)a1;
- (id)sourceTrackParams;
- (id)sourceTrackParamsWithScene:(long long)a0 enterMethod:(long long)a1;
- (id)p_liveRoomInfoAndADInfoDict;
- (void).cxx_destruct;

@end
