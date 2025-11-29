@class NSString;

@interface AWESECAppJumpRulerDecisionMaker : NSObject <AWESECAppJumpDecisionMakerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)pipelineCheck:(id)a0 withEvent:(id)a1;
- (id)rulerCheck:(id)a0 withEvent:(id)a1;

@end
