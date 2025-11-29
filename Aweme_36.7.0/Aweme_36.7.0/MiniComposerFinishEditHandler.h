@class MiniComposerFinishMergeImpl;
@protocol ACCSequenceEditServiceProtocol;

@interface MiniComposerFinishEditHandler : MiniComposerFinishBaseHandler

@property (retain, nonatomic) MiniComposerFinishMergeImpl *mergeImpl;
@property (retain, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;

- (void)exportAllItems:(id /* block */)a0;
- (void).cxx_destruct;

@end
