@class NSString, AWEPadBaseListSectionController, UIView, AWEPadBaseSectionViewModel;
@protocol NSObject;

@interface AWEPadListReusableViewBaseController : NSObject <AWEPadListReusableViewBreakPoint>

@property (retain, nonatomic) id model;
@property (weak, nonatomic) UIView *view;
@property (weak, nonatomic) AWEPadBaseSectionViewModel *sectionViewModel;
@property (weak, nonatomic) AWEPadBaseListSectionController *sectionController;
@property (nonatomic) long long index;
@property (readonly, nonatomic) id<NSObject> diffIdentifier;
@property (nonatomic) BOOL enableLightMode;
@property (nonatomic) long long dataType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)columnNumWithCollectionView:(id)a0;
- (double)cellWidthWithCollectionView:(id)a0;
- (void)viewDidDisplay;
- (void)configView:(id)a0;
- (struct CGSize { double x0; double x1; })viewSizeWithIndex:(long long)a0 collectionViewSize:(struct CGSize { double x0; double x1; })a1 contentSize:(struct CGSize { double x0; double x1; })a2;
- (void)viewDidEndDisplay;
- (BOOL)isViewAvailable;
- (BOOL)isViewMovable;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (Class)viewClass;
- (void)didSelectItemAtIndex:(long long)a0;

@end
