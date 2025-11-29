@class NSString, NSNumber;

@interface AWEStoryImpl.Story25ItemOffset : MTLModel <MTLJSONSerializing> {
    void /* function */ itemID;
}

@property (nonatomic, copy) NSString *itemID;
@property (nonatomic, retain) NSNumber *offset;

+ (id)itemIDJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
