@class NSString;

@interface AWEPaySwiftImpl.CCMDeviceCertModel : MTLModel <MTLJSONSerializing> {
    void /* function */ aid;
    void /* function */ uid;
    void /* function */ did;
    void /* function */ cnID;
    void /* function */ deviceCertInfo;
}

@property (nonatomic, copy) NSString *aid;
@property (nonatomic, copy) NSString *uid;
@property (nonatomic, copy) NSString *did;
@property (nonatomic, copy) NSString *cnID;
@property (nonatomic, copy) NSString *deviceCertInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
