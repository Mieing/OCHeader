@interface AWEStudioChallengeUtils : NSObject

+ (void)fetchChallengeModelWtihChallengeId:(id)a0 isCommerce:(BOOL)a1 orHashtagName:(id)a2 completion:(id /* block */)a3;
+ (void)fetchChallengeModelWtihChallengeId:(id)a0 isCommerce:(BOOL)a1 orHashtagName:(id)a2 showErrTips:(BOOL)a3 completion:(id /* block */)a4;
+ (void)onReceiveChallengeModel:(id)a0 error:(id)a1 completion:(id /* block */)a2 showErrTips:(BOOL)a3;

@end
