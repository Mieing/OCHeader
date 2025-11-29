@class NSString;

@interface AWECommentPanelListSwiftImpl.CommentManagerFilterItemModel : AWEBaseApiModel {
    void /* function */ name;
    void /* function */ type;
}

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *type;
@property (nonatomic) BOOL selected;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
