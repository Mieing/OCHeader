@class NSString;

@interface AWEHPSideBarCommonViewFactoryService : HTSService <AWEHPSideBarCommonViewFactoryService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createSideBarStencilViewWithItemContext:(id)a0 withDataModel:(id)a1;
+ (id)createSideBarStencilCustomModuleViewWithItemContext:(id)a0 withDataModel:(id)a1 withDetailView:(id)a2;
+ (id)createSideBarVCBackgroundImageViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)createSideBarCellImageView;
+ (id)createSideBarCellImageViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)createSideBarCellImageViewWithImage:(id)a0;
+ (id)p_createProfileSideBarStencilViewWithItemContext:(id)a0 withDataModel:(id)a1;
+ (id)p_createSideBarStencilViewWithItemContext:(id)a0 withDataModel:(id)a1;


@end
