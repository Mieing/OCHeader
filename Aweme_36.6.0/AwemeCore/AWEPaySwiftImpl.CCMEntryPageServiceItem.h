@class NSString, _TtC15AWEPaySwiftImpl18CCMFirstPayChannel, _TtC15AWEPaySwiftImpl18CCMTopDiscountInfo, _TtC15AWEPaySwiftImpl18CCMServiceSubTitle;

@interface AWEPaySwiftImpl.CCMEntryPageServiceItem : MTLModel <MTLJSONSerializing> {
    void /* function */ serviceType;
    void /* function */ iconUrl;
    void /* function */ title;
    void /* function */ jumpUrl;
}

@property (nonatomic, copy) NSString *serviceType;
@property (nonatomic, copy) NSString *iconUrl;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *jumpUrl;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl18CCMFirstPayChannel *firstPayChannel;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl18CCMTopDiscountInfo *topDiscountInfo;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl18CCMServiceSubTitle *serviceSubTitle;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
