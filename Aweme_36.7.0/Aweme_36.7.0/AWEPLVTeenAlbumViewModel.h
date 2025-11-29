@class AWEPadBaseSectionViewModel, AWEPadBaseListSectionController, NSString;
@protocol AWEMinorAlbumProtocol, AWEPLVSectionViewModelProtocol;

@interface AWEPLVTeenAlbumViewModel : NSObject <AWEPLVCommonCardViewModelProtocol>

@property (retain, nonatomic) id<AWEMinorAlbumProtocol> model;
@property (weak, nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> *sectionViewModel;
@property (weak, nonatomic) AWEPadBaseListSectionController *sectionController;
@property (nonatomic) BOOL isCollected;
@property (nonatomic) long long dataType;
@property (copy, nonatomic) id /* block */ getJumpExtraParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)a0 withExtraParams:(id)a1;
- (void)historyClickReport;
- (void)onFavoriteTagClicked;
- (void)transferToTeenAlbumPlayer:(id)a0;
- (void)trackEvent:(id)a0 withExtraParams:(id)a1 teenAlbumModel:(id)a2;
- (struct CGSize { double x0; double x1; })normalCalculateSizeWithIndex:(long long)a0 collectionViewSize:(struct CGSize { double x0; double x1; })a1 contentSize:(struct CGSize { double x0; double x1; })a2;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:(long long)a0;

@end
