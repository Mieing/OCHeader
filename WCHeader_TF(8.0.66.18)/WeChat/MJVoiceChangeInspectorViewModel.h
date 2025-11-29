@class MJNarrationSegmentViewModel, NSString, NSArray, MJSpeechManager;

@interface MJVoiceChangeInspectorViewModel : MJSegmentInspectorViewModel <MJSpeechTextInspectorViewModelProtocol>

@property (retain, nonatomic) MJSpeechManager *speechManager;
@property (retain, nonatomic) MJNarrationSegmentViewModel *segmentVM;
@property (retain, nonatomic) NSString *originRoleID;
@property (retain, nonatomic) NSArray *itemGroups;
@property (nonatomic) BOOL isVoiceCloneEnabledByConfig;
@property (readonly, nonatomic) unsigned long long narrationType;
@property (readonly, nonatomic) NSString *selectedRoleID;
@property (copy, nonatomic) id /* block */ updateSelectionHandler;
@property (copy, nonatomic) id /* block */ applyAllWillBeginHandler;
@property (copy, nonatomic) id /* block */ applyAllDidFinishHandler;
@property (copy, nonatomic) id /* block */ beginVoiceCloneHandler;
@property (copy, nonatomic) id /* block */ deleteVoiceCloneRoleHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSegmentVM:(id)a0 type:(unsigned long long)a1 narrationType:(unsigned long long)a2 speechManager:(id)a3;
- (void)dealloc;
- (id)title;
- (id)subTitle;
- (BOOL)isCancelEnabled;
- (BOOL)isApplyAllSwitchEnabled;
- (void)notifyDidFinish;
- (void)bindSignals;
- (void)speechRequestStatusDidUpdateWithAudioID:(id)a0 roleID:(id)a1 status:(unsigned long long)a2;
- (void)loadItemsWithCompletion:(id /* block */)a0;
- (id)itemsWithMaterialCategories:(id)a0;
- (id)defaultItems;
- (id)defaultVoiceChangeItems;
- (void)_loadItemsInNarrationSpeakWithCompletion:(id /* block */)a0;
- (id)_itemsInNarrationSpeakWithMaterialCategories:(id)a0;
- (id)_defaultItemsInNarrationSpeak;
- (id)_defaultVoiceChangeItemsInNarrationSpeak;
- (void)_loadItemsInNarrationTextInputWithCompletion:(id /* block */)a0;
- (id)_itemsInNarrationTextInputWithMaterialCategories:(id)a0;
- (id)_defaultItemsInNarrationTextInput;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)indexPathForItemWithRoleID:(id)a0;
- (id)itemWithRoleID:(id)a0;
- (id)itemAtIndexPath:(id)a0;
- (void)handleSelectItemAtIndexPath:(id)a0 autoPlay:(BOOL)a1 forceRequest:(BOOL)a2;
- (void).cxx_destruct;

@end
