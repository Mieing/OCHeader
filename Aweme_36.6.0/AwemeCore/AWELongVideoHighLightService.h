@class NSString, NSMutableDictionary;

@interface AWELongVideoHighLightService : HTSService <AWELongVideoHighLightService>

@property (retain, nonatomic) NSMutableDictionary *hightLightToFeatureFilmMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableLongVideoHighLightReplace;
+ (BOOL)enableLongVideoHighLightVideoPlayFinishTrack;
+ (BOOL)enableHighLightTrackParams:(id)a0;
+ (id)getRequestParamsForHighlight:(id)a0;

- (BOOL)shouldReplaceHighLightId:(id)a0;
- (void)addHighLightId:(id)a0 awemeId:(id)a1 token:(id)a2 extraParams:(id)a3;
- (id)getAwemeIdFromHighLightId:(id)a0;
- (id)getTokenFromHighLightId:(id)a0;
- (id)getCreateTimeFromHighLightId:(id)a0;
- (void)replaceAwemeIdIfNeededWithHighLightId:(id)a0 targetParams:(id)a1 awemeIdKey:(id)a2;
- (id)getHighlightType:(id)a0;
- (void).cxx_destruct;

@end
