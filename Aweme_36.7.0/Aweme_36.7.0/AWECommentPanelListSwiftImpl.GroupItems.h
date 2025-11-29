@class NSString, NSArray;

@interface AWECommentPanelListSwiftImpl.GroupItems : AWEBaseApiModel {
    void /* function */ groupName;
    void /* function */ groupItem;
}

@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, copy) NSArray *groupItem;

+ (id)groupItemJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
