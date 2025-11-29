@class NSString, AWEPadBaseListSectionController, AWEPLVChildHistoryModel, AWEPadBaseSectionViewModel;
@protocol AWEPLVSectionViewModelProtocol;

@interface AWEPLVChildHistoryViewModel : NSObject <AWEPLVCommonCardViewModelProtocol>

@property (retain, nonatomic) AWEPLVChildHistoryModel *model;
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
- (id)getAlbumIDsWithHistoryModel:(id)a0;
- (void)transferToRelatedVideo:(id)a0;
- (void)trackEvent:(id)a0 withExtraParams:(id)a1 historyModel:(id)a2;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:(long long)a0;

@end
