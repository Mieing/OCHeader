@class NSArray;

@interface IESIMGroupImpl.GroupManagerOperationLogResponse : AWEBaseApiModel {
    void /* function */ operationList;
}

@property (nonatomic, copy) NSArray *operationList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long nextCursor;

+ (id)operationListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
