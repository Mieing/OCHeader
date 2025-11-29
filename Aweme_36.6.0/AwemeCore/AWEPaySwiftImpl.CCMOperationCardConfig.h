@class NSString;

@interface AWEPaySwiftImpl.CCMOperationCardConfig : MTLModel <MTLJSONSerializing> {
    void /* function */ operationCode;
    void /* function */ icon;
    void /* function */ iconSubTitle;
    void /* function */ mainTitle;
    void /* function */ operationDesc;
    void /* function */ mainAction;
    void /* function */ mainActionParam;
    void /* function */ mainButton;
    void /* function */ mainButtonAction;
    void /* function */ mainButtonParams;
    void /* function */ subButton;
    void /* function */ subButtonAction;
    void /* function */ subButtonParams;
}

@property (nonatomic, copy) NSString *operationCode;
@property (nonatomic, copy) NSString *icon;
@property (nonatomic, copy) NSString *iconSubTitle;
@property (nonatomic, copy) NSString *mainTitle;
@property (nonatomic, copy) NSString *operationDesc;
@property (nonatomic, copy) NSString *mainAction;
@property (nonatomic, copy) NSString *mainActionParam;
@property (nonatomic, copy) NSString *mainButton;
@property (nonatomic, copy) NSString *mainButtonAction;
@property (nonatomic, copy) NSString *mainButtonParams;
@property (nonatomic, copy) NSString *subButton;
@property (nonatomic, copy) NSString *subButtonAction;
@property (nonatomic, copy) NSString *subButtonParams;
@property (nonatomic) BOOL needBlurEffect;
@property (nonatomic) long long cleanOperation;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
