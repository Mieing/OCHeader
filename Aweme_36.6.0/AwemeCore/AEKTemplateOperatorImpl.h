@class NSString, CKGenericTemplateModel, AEKElementDiffableNode;

@interface AEKTemplateOperatorImpl : AEKBaseRenderEditor <AEKTemplateData, AEKElementDiffableNode, AEKTemplateOperator>

@property (copy, nonatomic) NSString *templateId;
@property (readonly, nonatomic) CKGenericTemplateModel *templateModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) AEKElementDiffableNode *diffableNode;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long updateID;
@property (readonly, nonatomic) id data;
@property (readonly, nonatomic) BOOL isEnable;

@end
