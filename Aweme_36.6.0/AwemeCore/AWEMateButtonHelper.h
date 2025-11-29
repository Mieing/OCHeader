@class NSString;

@interface AWEMateButtonHelper : NSObject <AWEMateButtonHelperProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)precheckAddMate:(id)a0 followStatus:(long long)a1;
+ (id)p_profileMateState:(id)a0 context:(id)a1;
+ (id)p_transitionToMate:(id)a0 context:(id)a1;
+ (BOOL)p_splitMateAndFollow;
+ (id)p_profileHiddenState:(id)a0 context:(id)a1;
+ (id)p_transitionToHidden:(id)a0 context:(id)a1;
+ (struct CGSize { double x0; double x1; })p_autoSize:(double)a0;
+ (void)configureProfileRelationView:(id)a0 context:(id)a1;


@end
