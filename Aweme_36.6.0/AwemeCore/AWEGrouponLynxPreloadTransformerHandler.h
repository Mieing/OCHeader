@class AWEGrouponEmptyCardPreloadConfig, NSMutableDictionary, NSString, NSMutableArray;

@interface AWEGrouponLynxPreloadTransformerHandler : NSObject <AWEGrouponSharkLynxContainerViewDelegate, AWEGrouponLynxPreloadHandlerProtocol>

@property (retain, nonatomic) AWEGrouponEmptyCardPreloadConfig *emptyCardConfig;
@property (retain, nonatomic) NSMutableDictionary *lynxContainerCache;
@property (retain, nonatomic) NSMutableArray *emptyCardContainerCache;
@property (retain, nonatomic) NSMutableArray *preloadedContainers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)lynxContainerForUrl:(id)a0 useScene:(unsigned long long)a1;
- (void)preloadLynxContainerWithModel:(id)a0;
- (void)preloadEmptyCardWithConfig:(id)a0;
- (id)initWithEmptyCardConfig:(id)a0;
- (void)lynxContainer:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)trackResultWithCode:(long long)a0 url:(id)a1 preloadModel:(id)a2 useScene:(unsigned long long)a3;
- (void).cxx_destruct;

@end
