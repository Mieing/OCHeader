@protocol ITPPlayerStateWrapperDelegate;

@interface TPPlayerStateWrapper : NSObject

@property unsigned long long currentState;
@property unsigned long long preState;
@property unsigned long long currentInnerState;
@property unsigned long long preInnerState;
@property (weak) id<ITPPlayerStateWrapperDelegate> delegate;

+ (id)stringForPlayerState:(unsigned long long)a0;
+ (id)stringForInnerState:(unsigned long long)a0;

- (void)changeToState:(unsigned long long)a0;
- (void)changeInnerToState:(unsigned long long)a0;
- (BOOL)isNormalInnerState;
- (void).cxx_destruct;

@end
