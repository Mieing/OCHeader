@class NSString, NSMutableDictionary;

@interface AWELiveClientAI : NSObject <AWEFeedFeatureProviderProtocol>

@property (retain, nonatomic) NSMutableDictionary *liveFeatureDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)getIndexInnerFeatureWithFollow;
- (id)provideCustomFeatureForModel:(id)a0 inFeedScene:(id)a1;
- (id)provideFeatureForModel:(id)a0 inFeedScene:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
