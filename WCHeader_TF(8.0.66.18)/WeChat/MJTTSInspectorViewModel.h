@class NSString, NSArray, MJSegmentViewModel, MJSpeechManager;

@interface MJTTSInspectorViewModel : MJSegmentInspectorViewModel <MJSpeechTextInspectorViewModelProtocol>

@property (retain, nonatomic) NSString *originRoleID;
@property (retain, nonatomic) NSString *originalRoleName;
@property (retain, nonatomic) NSString *originalAudioFilePath;
@property (retain, nonatomic) NSArray *items;
@property (nonatomic) BOOL shouldApplyToAll;
@property (retain, nonatomic) NSArray *ttsRequestItems;
@property (retain, nonatomic) MJSpeechManager *speechManager;
@property (retain, nonatomic) NSString *selectedRoleID;
@property (retain, nonatomic) MJSegmentViewModel *segmentVM;
@property (nonatomic) BOOL isVoiceCloneEnabledByConfig;
@property (copy, nonatomic) id /* block */ updateSelectionHandler;
@property (copy, nonatomic) id /* block */ applyAllWillBeginHandler;
@property (copy, nonatomic) id /* block */ applyAllDidFinishHandler;
@property (copy, nonatomic) id /* block */ beginVoiceCloneHandler;
@property (copy, nonatomic) id /* block */ deleteVoiceCloneRoleHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSegmentVM:(id)a0 type:(unsigned long long)a1 speechManager:(id)a2;
- (void)dealloc;
- (id)title;
- (BOOL)isNoneSpeechRoleID:(id)a0;
- (BOOL)isNewCloneSpeechRoleID:(id)a0;
- (id)segmentID;
- (id)roleID;
- (id)roleName;
- (id)ttsSegment;
- (BOOL)isCancelEnabled;
- (BOOL)isApplyAllSwitchEnabled;
- (void)notifyDidCancel;
- (void)notifyDidFinish;
- (void)bindSignals;
- (void)speechRequestStatusDidUpdateWithRoleID:(id)a0 status:(unsigned long long)a1;
- (void)loadItemsWithCompletion:(id /* block */)a0;
- (id)itemsWithMaterialCategories:(id)a0;
- (id)defaultItems;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)indexPathForItemWithRoleID:(id)a0;
- (id)itemWithRoleID:(id)a0;
- (id)itemAtIndexPath:(id)a0;
- (void)handleSelectItemAtIndexPath:(id)a0 autoPlay:(BOOL)a1 forceRequest:(BOOL)a2;
- (void)requestTTSWithRoleID:(id)a0 roleName:(id)a1 takeSnapshot:(BOOL)a2 autoPlay:(BOOL)a3 completion:(id /* block */)a4;
- (void)resetVoiceToNoneWithTakeSnapshot:(BOOL)a0 autoPlay:(BOOL)a1;
- (void)resetVoiceToOriginalWithTakeSnapshot:(BOOL)a0 autoPlay:(BOOL)a1;
- (void)cancelCurrentTTSRequestIfNeeded;
- (void)cancelTTSRequestsIfNeeded:(id)a0;
- (void)_updateRoleID:(id)a0 roleName:(id)a1;
- (BOOL)_replaceVoiceWithRoleID:(id)a0 roleName:(id)a1 audioFilePath:(id)a2 takeSnapshot:(BOOL)a3 autoPlay:(BOOL)a4;
- (void).cxx_destruct;

@end
