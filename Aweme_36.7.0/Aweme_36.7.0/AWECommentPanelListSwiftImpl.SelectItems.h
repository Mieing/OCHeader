@class NSString;

@interface AWECommentPanelListSwiftImpl.SelectItems : AWEBaseApiModel {
    void /* function */ name;
    void /* function */ value;
    void /* function */ group;
}

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *value;
@property (nonatomic) BOOL selectState;
@property (nonatomic, copy) NSString *group;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
