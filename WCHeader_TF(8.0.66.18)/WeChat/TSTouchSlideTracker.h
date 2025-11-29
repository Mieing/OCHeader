@class TSTouchTrackRecognizer, NSString, UIView, NSMutableArray;

@interface TSTouchSlideTracker : NSObject <TSTouchEventTracker>

@property (weak, nonatomic) UIView *attachedView;
@property (retain, nonatomic) TSTouchTrackRecognizer *trackRecognizer;
@property (retain, nonatomic) NSMutableArray *touches;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithView:(id)a0 trackEventHandler:(id /* block */)a1;
- (void)dealloc;
- (void).cxx_destruct;

@end
