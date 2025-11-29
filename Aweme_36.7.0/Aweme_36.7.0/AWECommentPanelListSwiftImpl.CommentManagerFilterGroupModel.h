@class NSString, NSArray;

@interface AWECommentPanelListSwiftImpl.CommentManagerFilterGroupModel : AWEBaseApiModel {
    void /* function */ groupName;
    void /* function */ groupType;
    void /* function */ selectedOptionType;
    void /* function */ items;
}

@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, copy) NSString *groupType;
@property (nonatomic) BOOL selected;
@property (nonatomic, copy) NSString *selectedOptionType;
@property (nonatomic, copy) NSArray *items;

+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (unsigned long long)getSortType:(id)a0;
- (id)getSortFilterType:(unsigned long long)a0;
- (void)updateSelectedOption:(id)a0;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
