@class NSMutableDictionary, NSString, IESLiveStrategyConfig, NSMutableArray;

@interface IESLiveStrategyCloudFeatureCenter : NSObject <IESLiveIMMessageSubscriber> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _safeAccessLock;
}

@property (retain, nonatomic) IESLiveStrategyConfig *config;
@property (retain, nonatomic) NSMutableDictionary *cloudFeature;
@property (retain, nonatomic) NSMutableArray *anchorIdList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (id)allCharactersForAnchorId:(id)a0;
- (id)characterValueForKey:(id)a0 anchorId:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)messageReceived:(id)a0;

@end
