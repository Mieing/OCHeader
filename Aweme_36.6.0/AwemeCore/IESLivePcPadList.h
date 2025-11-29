@class NSString, NSArray, UICollectionView, IESLivePcPadLoadingCell, IESLivePcPadHelpView, IESLivePcPadHeader, IESLivePcPadItemDCell;

@interface IESLivePcPadList : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UICollectionView *list;
@property (retain, nonatomic) IESLivePcPadHeader *header;
@property (nonatomic) BOOL startLoading;
@property (retain, nonatomic) NSArray *pcData;
@property (retain, nonatomic) NSArray *padData;
@property (copy, nonatomic) id /* block */ selectedBlock;
@property (copy, nonatomic) id /* block */ reFreshBlock;
@property (retain, nonatomic) IESLivePcPadItemDCell *selectedDeviceCell;
@property (retain, nonatomic) IESLivePcPadLoadingCell *loadingCell;
@property (retain, nonatomic) IESLivePcPadHelpView *padHelp;
@property (retain, nonatomic) IESLivePcPadHelpView *pcHelp;
@property (retain, nonatomic) IESLivePcPadHelpView *currentHelp;
@property (nonatomic) unsigned long long theme;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } helpAnimOrigin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createPcPadCombineCell:(id)a0 forIndexPath:(id)a1 data:(id)a2;
- (void)showHelpWith:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })helpFrameWith:(BOOL)a0 top:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 theme:(unsigned long long)a1 selectedBlock:(id /* block */)a2 refreshBlock:(id /* block */)a3;
- (void)updateWithPcData:(id)a0;
- (void)updateWithPadData:(id)a0;
- (void)updateWithQRCodeImage:(id)a0;
- (void)resetSelected;
- (void)checkDataWhenFetchFinish;
- (long long)currentPcCount;
- (long long)currentPadCount;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)themeColor;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)setupUI;
- (id)totalData;

@end
