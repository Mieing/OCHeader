@class MMFinderLiveFeedExtraInfoFetchLogic, NSString, WCFinderLiveEntertainmentChannelsViewModel, MMUIViewController, NSData, FinderLiveStreamGetAsyncLoadInfoConfig, FinderLiveEcGetLiveConfigResponse;

@interface WCFinderLiveEntertainmentChannelsContext : NSObject <WCFinderLiveFeedGenericPageContextBase>

@property (retain, nonatomic) NSString *themeId;
@property (nonatomic) int scene;
@property (weak, nonatomic) WCFinderLiveEntertainmentChannelsViewModel *vcVM;
@property (weak, nonatomic) MMUIViewController *vc;
@property (nonatomic) BOOL isViewAppearing;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) FinderLiveStreamGetAsyncLoadInfoConfig *asyncLoadInfoConfig;
@property (nonatomic) BOOL skipFeedsReport;
@property (nonatomic) double actionButtonDistanceToBottom;
@property (retain, nonatomic) FinderLiveEcGetLiveConfigResponse *ecConfigResp;
@property (readonly, nonatomic) BOOL enableSkeleton;
@property (readonly, nonatomic) BOOL enableAvatarSkeleton;
@property (readonly, nonatomic) double skeletonAnimationDelay;
@property (retain, nonatomic) MMFinderLiveFeedExtraInfoFetchLogic *extraFetchLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithThemeId:(id)a0 scene:(int)a1;
- (void).cxx_destruct;

@end
