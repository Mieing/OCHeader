@class NLEInterface_OC;

@interface AWEStudioMattingSession : NSObject

@property (retain, nonatomic) NLEInterface_OC *nleInterface;

- (id)prepareNLETrackSlot:(id)a0;
- (id)prepareNLEModelWithNLETrackSlot:(id)a0 mattingModel:(id)a1;
- (void)mattingFragmentWithModel:(id)a0 completion:(id /* block */)a1;
- (void)cancelCurrentMattingExport;
- (void).cxx_destruct;
- (void)dealloc;

@end
