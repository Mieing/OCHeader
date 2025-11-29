@class NSString, _TtC15AWEPaySwiftImpl20TripShowElementModel;

@interface AWEPaySwiftImpl.TripTabInfo : MTLModel <MTLJSONSerializing> {
    void /* function */ secServiceTypeString;
}

@property (nonatomic) long long index;
@property (nonatomic) BOOL isDefault;
@property (nonatomic, copy) NSString *secServiceTypeString;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl20TripShowElementModel *uiInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
