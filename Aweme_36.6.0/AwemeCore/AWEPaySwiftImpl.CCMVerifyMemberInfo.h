@class NSString;

@interface AWEPaySwiftImpl.CCMVerifyMemberInfo : MTLModel <MTLJSONSerializing> {
    void /* function */ verifyURL;
    void /* function */ verifyType;
    void /* function */ verifyOrderNo;
    void /* function */ verifyToken;
    void /* function */ verifyMode;
    void /* function */ decisionID;
}

@property (nonatomic, copy) NSString *verifyURL;
@property (nonatomic, copy) NSString *verifyType;
@property (nonatomic, copy) NSString *verifyOrderNo;
@property (nonatomic, copy) NSString *verifyToken;
@property (nonatomic, copy) NSString *verifyMode;
@property (nonatomic, copy) NSString *decisionID;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
