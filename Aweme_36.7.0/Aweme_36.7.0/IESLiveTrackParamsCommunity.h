@class NSString;

@interface IESLiveTrackParamsCommunity : NSObject <IESLiveTrackParamsProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addParams:(id)a0 inRoom:(id)a1;
- (void)addMatrixAttributeFromRoom:(id)a0 context:(id)a1;

@end
