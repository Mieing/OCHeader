@class NSString;

@interface AWEPaySwiftImpl.SecurityLockEventModel : MTLModel <MTLJSONSerializing> {
    void /* function */ uid;
    void /* function */ eventStr;
    void /* function */ userLockTypeStr;
    void /* function */ idNameMasked;
}

@property (nonatomic, copy) NSString *uid;
@property (nonatomic, copy) NSString *eventStr;
@property (nonatomic, copy) NSString *userLockTypeStr;
@property (nonatomic, copy) NSString *idNameMasked;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
