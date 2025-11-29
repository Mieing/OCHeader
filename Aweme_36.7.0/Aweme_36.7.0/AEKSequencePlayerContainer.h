@class NSString, AEKSequencePlayerPreviewImpl, AEKSequencePlayerControlImpl;
@protocol AEKSequencePlayerBusinessDelegate;

@interface AEKSequencePlayerContainer : UIView <AEKSequencePlayerProtocol>

@property (retain, nonatomic) AEKSequencePlayerPreviewImpl *preview;
@property (retain, nonatomic) AEKSequencePlayerControlImpl *control;
@property (weak, nonatomic) id<AEKSequencePlayerBusinessDelegate> businessDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWorkspace:(id)a0 standFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
