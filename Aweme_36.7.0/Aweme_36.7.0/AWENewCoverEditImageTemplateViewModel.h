@interface AWENewCoverEditImageTemplateViewModel : AWEImageTemplateEditViewModel

- (id)commonTrackParams;
- (id)currentImageModel;
- (id)templateIDInDraftModel;
- (long long)templateScene;
- (void)processTemplates:(id)a0 categories:(id)a1 needFilterCategoryArray:(BOOL)a2;
- (void)refreshTemplatesDataForAllowType;
- (id)getTemplateInfoModel;
- (id)currentImage;
- (void)setup;

@end
