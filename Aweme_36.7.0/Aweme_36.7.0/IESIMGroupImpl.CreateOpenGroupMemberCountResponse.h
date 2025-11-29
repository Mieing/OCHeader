@class NSArray;

@interface IESIMGroupImpl.CreateOpenGroupMemberCountResponse : AWEBaseApiModel {
    void /* function */ moduleItems;
}

@property (nonatomic, copy) NSArray *moduleItems;

+ (id)moduleItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
