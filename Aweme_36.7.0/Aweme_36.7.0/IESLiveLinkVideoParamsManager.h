@class NSMutableDictionary, IESLiveLinkLiveCoreExtInfo;
@protocol IESLiveLinkLiveCore;

@interface IESLiveLinkVideoParamsManager : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _roomIDToRTCExtMutexLock;
}

@property (weak, nonatomic) id<IESLiveLinkLiveCore> liveCoreClient;
@property (retain, nonatomic) NSMutableDictionary *roomIDToRTCExtInfo;
@property (retain, nonatomic) NSMutableDictionary *roomIDToCustomizedRTCVideoParam;
@property (retain, nonatomic) NSMutableDictionary *roomIDToRTCVideoParams;
@property (retain, nonatomic) IESLiveLinkLiveCoreExtInfo *liveCoreExtInfo;
@property (retain, nonatomic) NSMutableDictionary *roomIDToVideoMixParam;
@property (retain, nonatomic) NSMutableDictionary *roomIDToMixType;
@property (nonatomic) long long playMode;
@property (nonatomic) BOOL roomUserVisibility;

- (long long)p_getCurrentSysMillSeconds;
- (long long)mixType;
- (id)initWithLiveCore:(id)a0;
- (id)rtcUserID;
- (id)rtcExtInfo;
- (void)updateRTCExtInfo:(id)a0;
- (long long)roomIndexForRoomID:(id)a0;
- (id)liveCoreStreamConfig;
- (void)updateLiveCoreStreamParams:(id)a0;
- (void)updateVideoMixParamsWithMixType:(long long)a0 priority:(long long)a1 userInfo:(id)a2;
- (id)liveRTCVideoBusinessParam;
- (id)videoMixParams;
- (void)updateRTCExtInfo:(id)a0 forRoom:(long long)a1;
- (id)rtcExtInfoForRoom:(long long)a0;
- (id)roomIDForRoom:(long long)a0;
- (id)allRoomPramsInfo;
- (id)rtcExtInfoForRoomID:(id)a0;
- (void)updateCustomizedRTCVideoParams:(id)a0 forRoom:(long long)a1;
- (id)appIDForRoom:(long long)a0;
- (id)rtcUserIDForRoom:(long long)a0;
- (id)tokenForRoom:(long long)a0;
- (id)liveRTCVideoBusinessParamForRoom:(long long)a0;
- (long long)mixTypeForRoom:(long long)a0;
- (void)updateVideoMixParamsWithMixType:(long long)a0 priority:(long long)a1 userInfo:(id)a2 forRoom:(long long)a3;
- (BOOL)p_checkVendorClientMixPercentage:(id)a0 playMode:(id)a1;
- (id)videoMixParamsForRoom:(long long)a0;
- (void)updateCustomizedRTCVideoParams:(id)a0;
- (id)appID;
- (void).cxx_destruct;
- (id)token;
- (void)dealloc;
- (id)roomID;

@end
