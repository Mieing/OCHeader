@class HTSLiveGiftItem, IESLiveRefactGiftPanelViewBuilderLayoutInfo, IESLiveGiftPanelDataSharing, NSString, IESLiveCombineSubject;

@interface IESLiveGiftSearchItem : IESLiveRefactGiftPanelSectionViewModel <IESLiveAioLinkGiftSearchService>

@property (retain, nonatomic) IESLiveGiftPanelDataSharing *dataSharing;
@property (retain, nonatomic) IESLiveCombineSubject *searchResultSubject;
@property (retain, nonatomic) HTSLiveGiftItem *originalSelectedItem;
@property (retain, nonatomic) IESLiveRefactGiftPanelViewBuilderLayoutInfo *panelBuilderLayoutInfo;
@property (copy, nonatomic) id /* block */ searchCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)bindViewModel;
- (id)initWithGiftPanelDataSharing:(id)a0;
- (void)doSearch:(id)a0;
- (id)observeSearchResult;
- (void).cxx_destruct;
- (void)back;

@end
