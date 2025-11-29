@class NSString, NSDictionary, IESECTabKitSSRChunkFrame, IESECTabKitLynxSSRPerfTiming, IESECTabKitLynxTemplateRes;

@interface IESECTabKitLynxSSRViewModel : NSObject

@property (copy, nonatomic) NSString *ssrUrl;
@property (copy, nonatomic) NSString *hydrateHash;
@property (retain, nonatomic) IESECTabKitLynxTemplateRes *bundleTemplateRes;
@property (retain, nonatomic) IESECTabKitLynxTemplateRes *headerTemplateRes;
@property (copy, nonatomic) NSDictionary *ssrInitData;
@property (copy, nonatomic) id /* block */ hydrateDataCompletion;
@property (retain, nonatomic) IESECTabKitSSRChunkFrame *ssrResFrame;
@property (retain, nonatomic) IESECTabKitSSRChunkFrame *bizDataFrame;
@property (retain, nonatomic) IESECTabKitLynxSSRPerfTiming *perfTiming;

+ (BOOL)hitSSRForBundleUrl:(id)a0;
+ (void)prefetchGeckoResource:(id)a0;

- (id)getSSRApiVersion;
- (id)initWithSSRUrl:(id)a0;
- (void)startFetchSSRDataWithBundleUrl:(id)a0 globalProps:(id)a1 initialData:(id)a2 ssrDataCompletion:(id /* block */)a3 hydrateDataCompletion:(id /* block */)a4;
- (void)invokeHydrateCallbackIfNeeded;
- (void).cxx_destruct;

@end
