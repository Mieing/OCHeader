@class NSMutableDictionary, IESECMediaPreviewRequest;

@interface IESECPreviewVisibilityManager : NSObject <IESECPreviewVisibilityService>

@property (retain, nonatomic) NSMutableDictionary *configMap;
@property (retain, nonatomic) NSMutableDictionary *viewMap;
@property (retain, nonatomic) IESECMediaPreviewRequest *request;

- (void)bindView:(id)a0 visibilityId:(id)a1;
- (BOOL)hasVisibilityConfig:(id)a0;
- (BOOL)getHiddenStateWithCurrentIndex:(long long)a0 visibilityId:(id)a1;
- (void)updateVisibilityWithCurrentIndex:(long long)a0 visibilityId:(id)a1;
- (void)updateVisibilityWithCurrentIndex:(long long)a0 nextIndex:(long long)a1 didZoom:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0;

@end
