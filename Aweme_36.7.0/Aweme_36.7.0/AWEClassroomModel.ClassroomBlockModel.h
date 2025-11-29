@class NSString, NSArray;

@interface AWEClassroomModel.ClassroomBlockModel : MTLModel <MTLJSONSerializing> {
    void /* function */ schema;
    void /* function */ bannerList;
}

@property (nonatomic, copy) NSString *schema;
@property (nonatomic, copy) NSArray *bannerList;

+ (id)bannerListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
