@class CKGenericTemplateModel, NSArray;

@interface AWEStudio25StorySparkResourceModel : NSObject

@property (retain, nonatomic) CKGenericTemplateModel *applyTemplateModel;
@property (retain, nonatomic) NSArray *sparkTemplateListGroup;
@property (nonatomic) BOOL firstTemplateSupportMention;

- (id)allTemplateIdsWithSpark:(id)a0;
- (void)setupTemplateModelListGroup:(id)a0 withSpark:(id)a1;
- (id)templateModelListWithIndex:(long long)a0;
- (id)templateGroupInfo;
- (id)templateInfoWithTemplateName:(id)a0 backgroundName:(id)a1 templateId:(id)a2 isDefault:(BOOL)a3 supportMention:(BOOL)a4;
- (void).cxx_destruct;

@end
