@class FinderGetLiveMsgResp_ExtraClientConfig;

@interface MMLiveExtraClientConfig : NSObject

@property (retain, nonatomic) FinderGetLiveMsgResp_ExtraClientConfig *respExtraConfig;
@property unsigned long long userChangingConfigCnt;
@property (readonly, nonatomic) BOOL userEnableLiveFeedBarrage;
@property (readonly, nonatomic) BOOL sysEnableLiveFeedBarrage;
@property (readonly, nonatomic) BOOL isUserChangingConfig;

- (BOOL)updateWithRespExtraClientConfig:(id)a0;
- (BOOL)updateLocalUserEnablePreviewLiveFloatMsg:(BOOL)a0;
- (void)userStartChangingConfig;
- (void)userStopChangingConfig;
- (BOOL)checkConfigEqual:(id)a0;
- (void).cxx_destruct;

@end
