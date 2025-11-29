@class NSString, IESLiveFunctionSquareTextField;

@interface IESLiveFunctionSquareSearchView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) IESLiveFunctionSquareTextField *searchTextField;
@property (nonatomic) BOOL isBeforeLive;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)textFieldDidClick;
- (id)initWithLiveStatus:(BOOL)a0;
- (void)updateSearchPlaceholder:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;

@end
