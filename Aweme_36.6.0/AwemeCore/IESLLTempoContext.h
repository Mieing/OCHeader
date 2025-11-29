@class IESLLTempoLogger, IESLLTempoExposureGlobalObserver, IESLLTempoExposureManager, IESLLTempoUIView, IESLLTempoPerfUtil, NSError, NSDictionary, IESLLTempoTemplateRender, NSPointerArray, IESLLTempoExprCoreRunner;
@protocol IESLLTempoEventManagerProviderProtocol, IESLLTempoResourceProviderProtocol;

@interface IESLLTempoContext : NSObject

@property (weak, nonatomic) IESLLTempoTemplateRender *templateRender;
@property (weak, nonatomic) IESLLTempoExprCoreRunner *exprRunner;
@property (weak, nonatomic) IESLLTempoUIView *containerView;
@property (weak, nonatomic) id<IESLLTempoResourceProviderProtocol> resourceProvider;
@property (weak, nonatomic) id<IESLLTempoEventManagerProviderProtocol> eventManagerProvider;
@property (weak, nonatomic) IESLLTempoExposureManager *exposureManager;
@property (weak, nonatomic) IESLLTempoExposureGlobalObserver *exposureGlobalObserver;
@property (weak, nonatomic) IESLLTempoLogger *errLogger;
@property (weak, nonatomic) IESLLTempoLogger *perfLogger;
@property (weak, nonatomic) IESLLTempoPerfUtil *perfUtil;
@property (nonatomic) BOOL advanceSizeChangeCallback;
@property (nonatomic) BOOL asyncLayoutAndUI;
@property (nonatomic) BOOL enableExposureOpt;
@property (nonatomic) BOOL enableRuntimePreload;
@property (nonatomic) BOOL enableRuntimeCodeCache;
@property (retain, nonatomic) NSDictionary *originTreeMap;
@property (copy, nonatomic) NSDictionary *defaultGlobalProps;
@property (nonatomic) long long widthMode;
@property (nonatomic) long long heightMode;
@property (nonatomic) double containerWidth;
@property (nonatomic) double containerHeight;
@property (retain, nonatomic) NSError *loadFlowError;
@property (retain, nonatomic) NSPointerArray *animationNodeWeakArray;

- (void)console:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
