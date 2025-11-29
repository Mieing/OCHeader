@class NSArray;

@interface AWEFriendsImpl.AwemeFamiliarGroupResponse : AWEBaseApiModel {
    void /* function */ itemList;
}

@property (nonatomic, copy) NSArray *itemList;

+ (id)itemListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
