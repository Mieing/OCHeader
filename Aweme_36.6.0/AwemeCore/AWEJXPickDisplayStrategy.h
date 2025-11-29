@class AWETemplateTagsModel, NSString, AWETemplateTagsContext;

@interface AWEJXPickDisplayStrategy : NSObject <AWETemplateTagsDisplayStrategyProtocol>

@property (retain, nonatomic) AWETemplateTagsModel *tagsModel;
@property (weak, nonatomic) AWETemplateTagsContext *context;
@property (copy, nonatomic) id /* block */ displayHandler;
@property (copy, nonatomic) id /* block */ hideHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loginStatusChangeTagsModel:(id)a0;
- (BOOL)containsDefaultAvatar:(id)a0;
- (id)initWithTagsModel:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (void)display;
- (void)hide;
- (void)reset;

@end
