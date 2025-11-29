@class FinderLiveSquareStyleInfo, MMFinderLiveFeedExtraInfoFetchLogic, MMUIViewController, NSData, WCFinderLiveHomePageInitialParams, NSString, FinderLiveEcGetLiveConfigResponse;

@interface WCFinderLiveHomePageCtx : NSObject <WCFinderLiveFeedGenericPageContextBase>

@property (nonatomic) BOOL enableSkeleton;
@property (nonatomic) double skeletonAnimationDelay;
@property (weak, nonatomic) MMUIViewController *vc;
@property (nonatomic) BOOL isViewAppearing;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) FinderLiveSquareStyleInfo *globalStyleInfo;
@property (retain, nonatomic) WCFinderLiveHomePageInitialParams *params;
@property (nonatomic) unsigned long long autoPlayFlag;
@property (retain, nonatomic) FinderLiveEcGetLiveConfigResponse *ecConfigResp;
@property (nonatomic) BOOL canScrollParent;
@property (nonatomic) BOOL canScrollChild;
@property (nonatomic) BOOL isTabStreamStyle;
@property (nonatomic) BOOL childScrollsToTop;
@property (nonatomic) BOOL hasFetchedLocation;
@property (copy, nonatomic) id /* block */ containerContextBlock;
@property (readonly, nonatomic) BOOL enableAvatarSkeleton;
@property (retain, nonatomic) MMFinderLiveFeedExtraInfoFetchLogic *extraFetchLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
