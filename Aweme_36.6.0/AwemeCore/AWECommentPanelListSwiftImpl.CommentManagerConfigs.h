@class NSArray;

@interface AWECommentPanelListSwiftImpl.CommentManagerConfigs : AWEBaseApiModel {
    void /* function */ groupData;
}

@property (nonatomic, copy) NSArray *groupData;

+ (id)groupDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
