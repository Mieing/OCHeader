@class NSString, NSDictionary, NSArray, IESLLTempoContextStore, NSMutableArray;
@protocol IESLLTempoEventManagerProviderProtocol, IESLLTempoLogProviderProtocol, IESLLTempoResourceProviderProtocol;

@interface IESLLTempoConfigModel : NSObject <IESLLTempoConfigModelProtocol>

@property (nonatomic) long long threadStrategy;
@property (nonatomic) double fontScale;
@property (nonatomic) BOOL enableCache;
@property (copy, nonatomic) NSString *nodeTag;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *bid;
@property (copy, nonatomic) NSString *containerID;
@property (copy, nonatomic) NSDictionary *globalProps;
@property (nonatomic) long long widthMode;
@property (nonatomic) long long heightMode;
@property (retain, nonatomic) NSArray *jsbMethods;
@property (retain, nonatomic) NSDictionary *jsbMethodBlocks;
@property (nonatomic) BOOL advanceSizeChangeCallback;
@property (nonatomic) BOOL asyncLayoutAndUI;
@property (nonatomic) BOOL enableExposureOpt;
@property (nonatomic) BOOL enableRuntimePreload;
@property (nonatomic) BOOL enableRuntimeCodeCache;
@property (nonatomic) BOOL enableCleanRuntimeCodeCache;
@property (retain, nonatomic) id<IESLLTempoResourceProviderProtocol> resourceProvider;
@property (retain, nonatomic) id<IESLLTempoEventManagerProviderProtocol> eventManagerProvider;
@property (retain, nonatomic) id<IESLLTempoLogProviderProtocol> logProvider;
@property (retain, nonatomic) NSMutableArray *nativeModules;
@property (retain, nonatomic) IESLLTempoContextStore *contextStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerNativeModule:(Class)a0 weakParams:(id)a1 Params:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
