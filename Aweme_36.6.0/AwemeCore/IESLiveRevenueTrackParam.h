@class NSString;

@interface IESLiveRevenueTrackParam : NSObject <IESLiveAudienceTrackParamProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)paramsWithEvent:(id)a0 originalParams:(id)a1 room:(id)a2 roomAisle:(id)a3;

@end
