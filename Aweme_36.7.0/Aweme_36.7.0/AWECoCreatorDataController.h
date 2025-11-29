@interface AWECoCreatorDataController : NSObject

+ (void)configureCoCreatorExternModelWithModel:(id)a0;
+ (id)creatAuthorWithModel:(id)a0;
+ (void)requestAwemeListWithModel:(id)a0 completion:(id /* block */)a1;
+ (void)requestAwemeCountWithModel:(id)a0 completion:(id /* block */)a1;
+ (void)trackPrefetchCocreatorPost;
+ (void)configureVerifyInfoWithModel:(id)a0 veriryInfoDict:(id)a1;
+ (void)requestVerificationWithSecUserIDs:(id)a0 completion:(id /* block */)a1;
+ (BOOL)prelodCoCreatorInfoWithModel:(id)a0 currentTime:(double)a1;
+ (void)requestCoCreatorInfoWithModel:(id)a0 coCreatorModel:(id)a1 requestVerifyInfo:(BOOL)a2 completion:(id /* block */)a3;
+ (void)requestUserIsInCoCreatorListWithModel:(id)a0 completion:(id /* block */)a1;

@end
