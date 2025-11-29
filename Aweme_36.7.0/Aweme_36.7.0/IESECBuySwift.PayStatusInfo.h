@class NSString;

@interface IESECBuySwift.PayStatusInfo : MTLModel <MTLJSONSerializing> {
    void /* function */ returnUrl;
    void /* function */ urlType;
    void /* function */ urlBtm;
    void /* function */ urlBcm;
}

@property (nonatomic, copy) NSString *returnUrl;
@property (nonatomic, copy) NSString *urlType;
@property (nonatomic) long long payStatus;
@property (nonatomic, copy) NSString *urlBtm;
@property (nonatomic, copy) NSString *urlBcm;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
