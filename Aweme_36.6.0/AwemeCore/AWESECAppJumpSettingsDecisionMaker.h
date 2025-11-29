@class NSArray, NSString;

@interface AWESECAppJumpSettingsDecisionMaker : NSObject <AWESECAppJumpDecisionMakerProtocol>

@property (copy, nonatomic) NSArray *certStatementKeys;
@property (copy, nonatomic) NSArray *allowListKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)isURLInAllowList:(id)a0;
- (id)pipelineCheck:(id)a0 withEvent:(id)a1;
- (id)precisionCheck:(id)a0 withCertToken:(id)a1;
- (id)probeCheck:(id)a0 withCertToken:(id)a1;
- (id)uncaughtCheck:(id)a0 certToken:(id)a1;
- (BOOL)checkIsURLInAllowListDict:(id)a0 URL:(id)a1 key:(id)a2;
- (BOOL)matchStrategies:(id)a0 WithURL:(id)a1 WithCertToken:(id)a2;
- (BOOL)isFixedConstraintEmpty:(id)a0;
- (id)getCertInfo:(id)a0 WithCategory:(id)a1;
- (BOOL)matchContent:(id)a0 matchRule:(id)a1 pattern:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
