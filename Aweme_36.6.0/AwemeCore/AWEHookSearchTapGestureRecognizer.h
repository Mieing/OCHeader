@interface AWEHookSearchTapGestureRecognizer : UITapGestureRecognizer

@property (copy, nonatomic) id /* block */ touchesBeganBlock;
@property (copy, nonatomic) id /* block */ touchesEndBlock;
@property (copy, nonatomic) id /* block */ touchesMovedBlock;
@property (copy, nonatomic) id /* block */ touchesCancelBlock;
@property (nonatomic) BOOL isMoved;
@property (nonatomic) double touchBeganTimeStamp;

- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
