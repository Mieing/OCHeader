@class CKGenericTemplateModel, NSString;

@interface ACCGenericEffectCellModel : NSObject <ACCGenericEffectModel>

@property (retain, nonatomic) CKGenericTemplateModel *templateModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)iconDownloadURLs;
- (id)fileDownloadURLs;
- (id)fileDownloadURI;
- (id)mvTemplateID;
- (BOOL)isCustomProp;
- (id)acc_downloadProgress;
- (id)acc_rawModel;
- (id)dynamicIconURLs;
- (BOOL)acc_ge_isPrefetch;
- (BOOL)acc_isSameSectionWithOtherModel:(id)a0;
- (void)acc_setIsFromSearch:(BOOL)a0;
- (id)initWithGenericTemplateModel:(id)a0;
- (void).cxx_destruct;
- (id)effectName;
- (BOOL)downloaded;
- (id)hintLabel;
- (id)sectionName;
- (void)setSectionName:(id)a0;
- (id)effectIdentifier;

@end
