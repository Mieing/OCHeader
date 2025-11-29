@interface UTDUrlWrapper : NSObject

+ (id)signConfUrl:(id)a0 query:(id)a1 data:(id)a2;
+ (id)generateFullUrl:(id)a0 urlQuery:(id)a1 signQuery:(id)a2 signData:(id)a3;
+ (id)generateConfFullUrl:(id)a0 urlQuery:(id)a1 signQuery:(id)a2 signData:(id)a3;
+ (id)baseSign:(id)a0;
+ (id)securitySign:(id)a0;
+ (id)signUploadUrl:(id)a0 query:(id)a1 data:(id)a2;

@end
