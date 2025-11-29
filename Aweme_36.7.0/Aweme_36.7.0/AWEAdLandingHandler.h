@class NSString;

@interface AWEAdLandingHandler : HTSService <AWEAdLandingHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)generalSearchCommonParamsForTrack;
- (BOOL)handleIronManURLLandingEvent:(id)a0;
- (id)composeIronManURLWithLandingEvent:(id)a0;
- (id)configRequestParamsWithModel:(id)a0;
- (id)ironManURLWithURL:(id)a0;

@end
