@class NSString, BDECPigeonLinkInfo, BDECPigeonUserTokenCacheModelV2;

@interface BDECPigeonLoginLinkInfoResult : NSObject

@property (readonly, nonatomic) BOOL success;
@property (readonly, copy, nonatomic) NSString *errMsg;
@property (readonly, nonatomic) BDECPigeonUserTokenCacheModelV2 *tokenCacheModel;
@property (readonly, nonatomic) BDECPigeonLinkInfo *linkInfo;

- (id)initWithSuccess:(BOOL)a0 errMsg:(id)a1 tokenCacheModel:(id)a2 linkInfo:(id)a3;
- (void).cxx_destruct;

@end
