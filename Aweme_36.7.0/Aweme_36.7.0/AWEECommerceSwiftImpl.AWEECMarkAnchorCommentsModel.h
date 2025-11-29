@class NSArray, NSNumber;

@interface AWEECommerceSwiftImpl.AWEECMarkAnchorCommentsModel : MTLModel <MTLJSONSerializing> {
    void /* function */ comments;
}

@property (nonatomic, copy) NSArray *comments;
@property (nonatomic, retain) NSNumber *total;
@property (nonatomic, retain) NSNumber *cursor;
@property (nonatomic, retain) NSNumber *hasMore;

+ (BOOL)automaticallyDefaultMapping;
+ (id)commentsJSONTransformer;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
