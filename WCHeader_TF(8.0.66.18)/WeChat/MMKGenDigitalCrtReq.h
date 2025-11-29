@class NSString;

@interface MMKGenDigitalCrtReq : NSObject

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) int idType;
@property (readonly, nonatomic) NSString *idNo;
@property (readonly, nonatomic) NSString *reqKey;
@property (readonly, nonatomic) NSString *verifyCode;
@property (readonly, nonatomic) NSString *token;
@property (readonly, nonatomic) NSString *creTail;
@property (readonly, nonatomic) int certEncryptType;

+ (id)KGenDigitalCrtReqWithType:(int)a0 idType:(int)a1 idNo:(id)a2 reqKey:(id)a3 verifyCode:(id)a4 token:(id)a5 creTail:(id)a6 certEncryptType:(int)a7;

- (id)initWithType:(int)a0 idType:(int)a1 idNo:(id)a2 reqKey:(id)a3 verifyCode:(id)a4 token:(id)a5 creTail:(id)a6 certEncryptType:(int)a7;
- (id)description;
- (void).cxx_destruct;

@end
