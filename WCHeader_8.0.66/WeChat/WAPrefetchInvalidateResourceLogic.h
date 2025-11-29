@class WAPrefetchInvalidateResourceInfo;

@interface WAPrefetchInvalidateResourceLogic : NSObject

@property (retain, nonatomic) WAPrefetchInvalidateResourceInfo *info;

- (id)init;
- (void)executeInvalidateCodeCmd:(id)a0;
- (void)executeInvalidateContactCmd:(id)a0;
- (void)resumeLocalData;
- (void)saveLocalData;
- (BOOL)isContactInvalidateWithAppid:(id)a0 updateTime:(unsigned int)a1;
- (BOOL)isCodePkgInvalidateWithAppid:(id)a0 updateTime:(unsigned int)a1;
- (unsigned int)reportIdForInvalidateContact:(id)a0;
- (unsigned int)reportIdForInvalidateCode:(id)a0;
- (id)allInvalidateCodeAppid;
- (id)allInvalidateContactAppid;
- (void)clearInvalidateContactWithAppid:(id)a0;
- (void)clearInvalidateCodeWithAppid:(id)a0;
- (void).cxx_destruct;

@end
