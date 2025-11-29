@class NSString, AWEStickerPickerSearchView;
@protocol ACCGenericEffectPanelSearchService;

@interface AWEStickerPickerSearchCollectionViewCell : UICollectionViewCell <AWEStickerPickerSearchCollectionViewCellProtocol>

@property (retain, nonatomic) AWEStickerPickerSearchView *searchView;
@property (retain, nonatomic) id<ACCGenericEffectPanelSearchService> model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)updateUIConfig:(id)a0;
- (void)scrollToItemAtSection:(unsigned long long)a0 index:(unsigned long long)a1 animated:(BOOL)a2;
- (void)scrollToItemAtSection:(unsigned long long)a0 index:(unsigned long long)a1 offset:(double)a2 animated:(BOOL)a3;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
