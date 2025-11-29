@interface IESLLTempoCommitWIPTreeTask : NSObject

+ (void)executeRemovePatchWithNode:(id)a0 context:(id)a1;
+ (void)executeInsertPatchWithNode:(id)a0 context:(id)a1;
+ (void)executeUpdatePatchWithNode:(id)a0 context:(id)a1;
+ (void)refreshFrameWithNode:(id)a0 context:(id)a1;
+ (void)renderUIWithOpenTree:(id)a0 context:(id)a1;

@end
