@class NSArray, NSString;

@interface AWEClassroomImpl.ClassroomDetailRecommendModel : MTLModel <MTLJSONSerializing> {
    void /* function */ dataList;
    void /* function */ nextCursor;
}

@property (nonatomic, copy) NSArray *dataList;
@property (nonatomic, copy) NSString *nextCursor;
@property (nonatomic) BOOL hasMore;

+ (id)dataListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
