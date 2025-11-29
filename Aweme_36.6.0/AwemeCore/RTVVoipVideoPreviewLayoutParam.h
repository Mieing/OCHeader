@class NSValue, NSNumber, UIView;

@interface RTVVoipVideoPreviewLayoutParam : NSObject

@property (retain, nonatomic) NSValue *fromFrame;
@property (retain, nonatomic) NSValue *targetFrame;
@property (retain, nonatomic) NSValue *completionFrame;
@property (retain, nonatomic) UIView *originSnapshot;
@property (retain, nonatomic) NSValue *targetSnapshotFrame;
@property (retain, nonatomic) NSNumber *targetSnapshotAlpha;

- (id)initWithFromFrame:(id)a0 targetFrame:(id)a1;
- (void).cxx_destruct;
- (id)description;

@end
