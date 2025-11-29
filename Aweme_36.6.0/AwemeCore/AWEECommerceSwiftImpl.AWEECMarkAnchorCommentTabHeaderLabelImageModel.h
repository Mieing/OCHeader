@class NSString, NSArray, NSNumber;

@interface AWEECommerceSwiftImpl.AWEECMarkAnchorCommentTabHeaderLabelImageModel : MTLModel <MTLJSONSerializing> {
    void /* function */ uri;
    void /* function */ urlList;
}

@property (nonatomic, copy) NSString *uri;
@property (nonatomic, copy) NSArray *urlList;
@property (nonatomic, retain) NSNumber *width;
@property (nonatomic, retain) NSNumber *height;

+ (BOOL)automaticallyDefaultMapping;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
