@class UIView, NSString, MMWebImageView, PAGFile, PAGView, WCVideoProducerTemplateCellViewModel, WCProgressMaskView, UILabel;

@interface WCVideoProducerTemplateIconView : UICollectionViewCell <MMWebImageViewDelegate, WCMVVMViewComponent> {
    PAGFile *_pagFile;
}

@property (retain, nonatomic) UIView *templateIconContainerView;
@property (retain, nonatomic) MMWebImageView *templateIconImageView;
@property (retain, nonatomic) UIView *templateIconBackgroundView;
@property (retain, nonatomic) UILabel *templateNameLabel;
@property (nonatomic) BOOL isTemplateCellSelected;
@property (retain, nonatomic) PAGView *loadingPagView;
@property (retain, nonatomic) UIView *selectedMaskView;
@property (retain, nonatomic) UIView *selectedDefaultView;
@property (retain, nonatomic) UIView *selectedEditableView;
@property (retain, nonatomic) WCProgressMaskView *progressMaskView;
@property (retain, nonatomic) WCVideoProducerTemplateCellViewModel *templateCellViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellIdentifier;
+ (id)headerIdentifier;
+ (struct CGSize { double x0; double x1; })iconSize;
+ (struct CGSize { double x0; double x1; })cellViewSize;

- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)loadTemplateCellViewModel:(id)a0;
- (void)_loadForNormalCellView:(id)a0;
- (void)_loadForStubCellView:(id)a0;
- (void)_loadForFolderCellView:(id)a0;
- (void)_loadForLauncherCellView:(id)a0;
- (void)_updateTemplateNameWithCellVM:(id)a0;
- (void)_updateProgressMaskViewWithCellVM:(id)a0;
- (void)_relayoutTemplateNameLabel:(id)a0 maxWidth:(double)a1;
- (void)_relayoutSelectedMaskView:(id)a0;
- (void)_loadForAccessbility;
- (void)_initView;
- (id)loadingPagFile;
- (void)_setRoundedRectangle;
- (void)_setRounded;
- (void)_initSelectedEditableIconMaskViewIfNeeded;
- (void)_initSelectedEditableIconBrandViewIfNeeded;
- (void)_relayoutSelectedEditableView;
- (void)_initSelectedDefaultViewIfNeeded;
- (void)_relayoutSelectedDefaultView;
- (void)onLoadImageOK:(id)a0;
- (void)didChangeViewModel:(id)a0 fromOldObject:(id)a1 toNewObject:(id)a2;
- (void)viewModel:(id)a0 didChangeProperty:(id)a1 fromOldValue:(id)a2 toNewValue:(id)a3;
- (id)observingPropertyKeyPathsForViewModel;
- (void)updateSubviewForPropertyKeyPath:(id)a0;
- (void).cxx_destruct;

@end
