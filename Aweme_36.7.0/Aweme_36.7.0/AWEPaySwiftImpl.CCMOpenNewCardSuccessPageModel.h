@class NSString, NSArray, _TtC15AWEPaySwiftImpl31CCMOpenSuccessPagePromotionInfo;

@interface AWEPaySwiftImpl.CCMOpenNewCardSuccessPageModel : MTLModel <MTLJSONSerializing> {
    void /* function */ ccmIcon;
    void /* function */ successPageTitle;
    void /* function */ successPageSubTitle;
    void /* function */ successPageInfoItems;
    void /* function */ successPageScheme;
}

@property (nonatomic, copy) NSString *ccmIcon;
@property (nonatomic, copy) NSString *successPageTitle;
@property (nonatomic, copy) NSString *successPageSubTitle;
@property (nonatomic, copy) NSArray *successPageInfoItems;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl31CCMOpenSuccessPagePromotionInfo *promotionInfo;
@property (nonatomic, copy) NSString *successPageScheme;

+ (id)successPageInfoItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
