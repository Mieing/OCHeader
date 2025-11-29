@class NSNumber, NSString;

@interface AWEECommerceSwiftImpl.AWEECMarkAnchorCommentAggregatedTermModel : MTLModel <MTLJSONSerializing> {
    void /* function */ text;
    void /* function */ prefixText;
    void /* function */ textColor;
    void /* function */ background;
    void /* function */ borderColor;
}

@property (nonatomic, retain) NSNumber *uiType;
@property (nonatomic, retain) NSNumber *id;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *prefixText;
@property (nonatomic, copy) NSString *textColor;
@property (nonatomic, copy) NSString *background;
@property (nonatomic, copy) NSString *borderColor;

+ (BOOL)automaticallyDefaultMapping;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
