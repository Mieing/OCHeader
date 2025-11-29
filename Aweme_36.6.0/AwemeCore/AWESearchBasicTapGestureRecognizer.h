@class NSDate;

@interface AWESearchBasicTapGestureRecognizer : UITapGestureRecognizer

@property (retain, nonatomic) NSDate *lastClickTime;
@property (copy, nonatomic) id /* block */ touchesBeganBlock;
@property (copy, nonatomic) id /* block */ touchesEndBlock;
@property (copy, nonatomic) id /* block */ touchesMovedBlock;
@property (copy, nonatomic) id /* block */ touchesCancelBlock;
@property (copy, nonatomic) id /* block */ touchesMissBlock;
@property (nonatomic) BOOL isMoved;
@property (nonatomic) BOOL isTouchEndTriggerd;
@property (nonatomic) double touchBeganTimeStamp;

- (void)toucheStatus;
- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
