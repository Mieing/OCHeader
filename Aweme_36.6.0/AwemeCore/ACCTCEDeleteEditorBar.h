@class NSString, ACCTrimCropBarItem, DUXActionSheet;
@protocol ACCTrimCropEditorConfigProtocol, ACCTrimCropSequencePieceServiceProtocol, IESServiceProvider, ACCTCETrackEventServiceProtocol;

@interface ACCTCEDeleteEditorBar : NSObject <ACCTrimCropSequencePieceServiceListener, DUXActionSheetDelegate, ACCTrimCropBarProtocol>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) ACCTrimCropBarItem *barItem;
@property (weak, nonatomic) id<ACCTrimCropSequencePieceServiceProtocol> sequencePieceService;
@property (weak, nonatomic) id<ACCTCETrackEventServiceProtocol> trackEventService;
@property (weak, nonatomic) id<ACCTrimCropEditorConfigProtocol> editorConfig;
@property (retain, nonatomic) DUXActionSheet *actionSheet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)actionSheet:(id)a0 didClickButtonAtIndex:(long long)a1;
- (void)actionSheetDidClickCancelButton:(id)a0;
- (void)sequencePieceService:(id)a0 didTransferToIndex:(long long)a1 isAutoTransfer:(BOOL)a2;
- (void)sequencePieceService:(id)a0 didChangedAtAddedIndexSet:(id)a1 deletedIndexSet:(id)a2;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
