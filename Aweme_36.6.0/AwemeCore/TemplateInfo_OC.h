@class TemplateConfig_OC, NSString, NLEResourceNode_OC, NLEVideoFrameModel_OC;

@interface TemplateInfo_OC : NLENode_OC

@property (nonatomic) struct shared_ptr<cut::model::TemplateInfo> { struct TemplateInfo *__ptr_; struct __shared_weak_count *__cntrl_; } cppModel;
@property (copy, nonatomic) NSString *templateId;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *tag;
@property (retain, nonatomic) TemplateConfig_OC *config;
@property (nonatomic) BOOL editable;
@property (nonatomic) BOOL dynamicElement;
@property (nonatomic) BOOL newTextTemplateKeyFrame;
@property (retain, nonatomic) NLEResourceNode_OC *coverRes;
@property (retain, nonatomic) NLEVideoFrameModel_OC *coverModel;

+ (id)restore:(id)a0;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::TemplateInfo> { struct TemplateInfo *x0; struct __shared_weak_count *x1; })a0;
- (void)addMutableItem:(id)a0;
- (void)clearMutableItem;
- (id)allMutableItems;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (id)store;

@end
