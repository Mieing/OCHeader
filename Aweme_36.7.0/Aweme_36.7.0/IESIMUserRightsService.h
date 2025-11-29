@class NSString;

@interface IESIMUserRightsService : HTSService <IESIMUserRightsService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resolveUserVerifyDataWithModel:(id)a0 resolveHandler:(id /* block */)a1;
- (void)trackUserVerifyWithEnterFrom:(id)a0 scene:(id)a1 uid:(id)a2 verifyType:(long long)a3;
- (long long)verifyGeneralType:(id)a0;
- (BOOL)isUserVerified:(id)a0;
- (long long)aweUserVerifyGeneralTypeToIESIM:(long long)a0;
- (long long)aweUserVerifyTypeToIESIM:(long long)a0;
- (long long)iesimUserVerifyTypeToAWE:(long long)a0;
- (BOOL)isUserVerifiedWithShareModel:(id)a0;

@end
