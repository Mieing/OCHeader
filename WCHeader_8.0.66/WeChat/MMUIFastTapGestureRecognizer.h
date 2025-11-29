@class NSString;
@protocol MMUIFastTapGestureRecognizerDelegate;

@interface MMUIFastTapGestureRecognizer : UITapGestureRecognizer

@property (weak, nonatomic) id<MMUIFastTapGestureRecognizerDelegate> delegate;
@property (nonatomic) double tapMaxDelay;
@property (retain, nonatomic) NSString *contextString;

- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setState:(long long)a0;
- (void)setStateToFailedIfNotRecognized;
- (void)reset;
- (void).cxx_destruct;

@end
