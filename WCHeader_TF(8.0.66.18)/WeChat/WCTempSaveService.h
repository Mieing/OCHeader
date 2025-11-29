@class NSOperationQueue, NSString, WCTempSaveModel;

@interface WCTempSaveService : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSOperationQueue *mediaFileQueue;
@property (retain, nonatomic) NSOperationQueue *textFileQueue;
@property (nonatomic) BOOL isReadingFile;
@property (nonatomic) unsigned long long curType;
@property (retain, nonatomic) WCTempSaveModel *textModel;
@property (retain, nonatomic) WCTempSaveModel *mediaModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onServiceMemoryWarning;
- (id)openOldText;
- (id)openOldMediaText;
- (id)openOldImages;
- (id)openOldSight;
- (unsigned long long)openOldMediaPasteLength;
- (id)openOldTextExtBean;
- (id)openOldMediaExtBean;
- (id)openOldPostCycleId;
- (void)removeOldTextFile;
- (void)removeOldMediaFile;
- (void)setText:(id)a0 poiInfo:(id)a1 tempSelectContacts:(id)a2 remindContactUsernames:(id)a3 pasteLength:(unsigned long long)a4 withExtBean:(id)a5 isDynamicTagEnabled:(BOOL)a6 postCycleId:(id)a7;
- (void)setMediaText:(id)a0 imageArray:(id)a1 sightDraft:(id)a2 poiInfo:(id)a3 tempSelectContacts:(id)a4 remindContactUsernames:(id)a5 pasteLength:(unsigned long long)a6 withExtBean:(id)a7 isDynamicTagEnabled:(BOOL)a8 postCycleId:(id)a9;
- (id)getLastPostVisibleLabelNames;
- (id)getLastPostInVisibleLabelNames;
- (BOOL)isDynamicTagEnabledForTempSave;
- (BOOL)shouldAutoRemove:(id)a0;
- (id)getMediaModelFromFile;
- (id)getTextModelFromFile;
- (id)getSessionID;
- (void).cxx_destruct;

@end
