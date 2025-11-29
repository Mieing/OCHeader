@class NSArray;

@interface AWECommentPanelListSwiftImpl.CommentManagerFilterBarModel : AWEBaseApiModel {
    void /* function */ filterGroups;
}

@property (nonatomic, copy) NSArray *filterGroups;

+ (id)filterGroupsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
