@class NSNumber, NSString;

@interface AWEECommerceSwiftImpl.AWEECMarkAnchorCommentTabItemModel : MTLModel <MTLJSONSerializing> {
    void /* function */ text;
    void /* function */ toast;
}

@property (nonatomic, retain) NSNumber *type;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *toast;

+ (BOOL)automaticallyDefaultMapping;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
