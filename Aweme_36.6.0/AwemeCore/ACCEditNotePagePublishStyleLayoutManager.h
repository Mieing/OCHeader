@class ACCEditBottomToolBarViewHolder, NSMapTable, ACCEditNotePagePreviewViewHolder, NSString, AWEVideoPublishViewModel, ACCEditNextButtonViewHolder;
@protocol ACCSequenceEditServiceProtocol, IESServiceProvider, ACCEditViewContainer, ACCComponentManager;

@interface ACCEditNotePagePublishStyleLayoutManager : NSObject <ACCEditUILayoutManagerProtocol>

@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceService;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCComponentManager> componentManager;
@property (retain, nonatomic) NSMapTable *componentMap;
@property (retain, nonatomic) ACCEditNextButtonViewHolder *nextButtonViewHolder;
@property (retain, nonatomic) ACCEditBottomToolBarViewHolder *toolBarViewHolder;
@property (retain, nonatomic) ACCEditNotePagePreviewViewHolder *previewViewHolder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRepository:(id)a0 serviceProvider:(id)a1;
- (void)layoutViews;
- (void).cxx_destruct;

@end
