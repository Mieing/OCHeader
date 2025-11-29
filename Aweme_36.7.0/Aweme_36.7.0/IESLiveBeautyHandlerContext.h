@class IESLiveBeautyResourceFetcher, IESLiveFaceBeautyHelper;
@protocol IESLiveEffectProcessService, IESLiveSyncRouter, IESLiveDIContext, IESLiveBeautyTrackService;

@interface IESLiveBeautyHandlerContext : NSObject

@property (nonatomic) long long handlerScene;
@property (retain, nonatomic) id<IESLiveDIContext> attachingDIContext;
@property (retain, nonatomic) IESLiveBeautyResourceFetcher *resourceFetcher;
@property (retain, nonatomic) id<IESLiveEffectProcessService> effectProcessService;
@property (retain, nonatomic) IESLiveFaceBeautyHelper *beautyHelper;
@property (retain, nonatomic) id<IESLiveBeautyTrackService> trackService;
@property (retain, nonatomic) id<IESLiveSyncRouter> syncRouter;

- (void).cxx_destruct;

@end
