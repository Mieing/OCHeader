@interface ACCRecordCaptionListSectionController : AWEBaseListSectionController

+ (BOOL)enableCellControllerDispatch;
+ (Class)cellControllerClassForViewModel:(id)a0;

- (id)init;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;

@end
