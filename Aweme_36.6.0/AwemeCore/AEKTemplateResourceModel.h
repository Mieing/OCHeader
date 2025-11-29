@class CKGenericTemplateModel, NSString;

@interface AEKTemplateResourceModel : NSObject <AEKTemplateResource>

@property (retain, nonatomic) CKGenericTemplateModel *templateModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
