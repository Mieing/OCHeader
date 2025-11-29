@class NSString;

@interface AWEPaySwiftImpl.FKMEntryListModel : MTLModel <MTLJSONSerializing> {
    void /* function */ iconUrl;
    void /* function */ title;
    void /* function */ subTitle;
    void /* function */ schema;
    void /* unknown type, empty encoding */ $__lazy_storage_$_isSKM;
}

@property (nonatomic, copy) NSString *iconUrl;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subTitle;
@property (nonatomic, copy) NSString *schema;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
