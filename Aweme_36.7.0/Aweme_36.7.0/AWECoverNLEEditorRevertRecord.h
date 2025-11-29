@class AWEVideoPublishViewModel;
@protocol IESServiceProvider, ACCStickerServiceProtocol, ACCEditorRecoverServiceProtocol, ACCEditServiceProtocol;

@interface AWECoverNLEEditorRevertRecord : NSObject

@property (readonly, weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<ACCEditorRecoverServiceProtocol> recoverService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (copy, nonatomic) id /* block */ undoCompletion;
@property (copy, nonatomic) id /* block */ redoCompletion;

- (id)initWithServiceProvider:(id)a0 repository:(id)a1;
- (void).cxx_destruct;
- (void)redo;
- (void)undo;

@end
