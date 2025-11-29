@interface AWEHotSearchShareContainerViewState : NSObject

@property (nonatomic) BOOL hasLoadData;
@property (nonatomic) BOOL hasReceiveRenderFinish;
@property (nonatomic) BOOL hasReceiveRenderError;
@property (nonatomic) BOOL hasNetworkLoadFail;
@property (nonatomic) BOOL isPreloading;
@property (nonatomic) BOOL isAdjustingScrollOffset;
@property (nonatomic) long long frameCount;
@property (readonly, nonatomic) long long targetFrame;

@end
