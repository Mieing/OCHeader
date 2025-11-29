@class UILabel, NSString;

@interface IESLiveDiggOwnCountView : UIView <CAAnimationDelegate>

@property (retain, nonatomic) UILabel *countLabel;
@property (copy, nonatomic) id /* block */ animCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)textColorWithDiggCount:(long long)a0;
- (id)initWithCount:(long long)a0 fixCrash:(BOOL)a1;
- (id)initWithDoubleCount:(long long)a0 fixCrash:(BOOL)a1;
- (void)startPlayAnimationWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;

@end
