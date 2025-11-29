@protocol POITapGestureRecognizerDelegate;

@interface POITapGestureRecognizer : UITapGestureRecognizer

@property (weak, nonatomic) id<POITapGestureRecognizerDelegate> actionDelegate;

- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
