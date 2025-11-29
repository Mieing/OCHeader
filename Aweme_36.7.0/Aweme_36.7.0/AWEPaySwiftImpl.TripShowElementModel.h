@class NSString;

@interface AWEPaySwiftImpl.TripShowElementModel : MTLModel <MTLJSONSerializing> {
    void /* function */ key;
    void /* function */ text;
    void /* function */ textColor;
    void /* function */ textHighlightColor;
    void /* function */ icon;
    void /* function */ highlightIcon;
    void /* function */ schema;
}

@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *textColor;
@property (nonatomic, copy) NSString *textHighlightColor;
@property (nonatomic, copy) NSString *icon;
@property (nonatomic, copy) NSString *highlightIcon;
@property (nonatomic, copy) NSString *schema;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
