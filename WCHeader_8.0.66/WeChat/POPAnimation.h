@class NSArray, NSString;

@interface POPAnimation : NSObject <NSCopying> {
    struct _POPAnimationState { void /* function */ **x0; id x1; int x2; id x3; unsigned long long x4; double x5; double x6; double x7; id x8; id /* block */ x9; id /* block */ x10; id /* block */ x11; id /* block */ x12; id x13; double x14; long long x15; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; unsigned char x22 : 1; unsigned char x23 : 1; unsigned char x24 : 1; unsigned char x25 : 1; unsigned char x26 : 1; unsigned char x27 : 1; unsigned char x28 : 1; unsigned char x29 : 1; } *_state;
}

@property (nonatomic) void *solver;
@property (readonly, nonatomic) int type;
@property (readonly, copy, nonatomic) id currentValue;
@property (copy, nonatomic) NSArray *progressMarkers;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) double beginTime;
@property (weak, nonatomic) id delegate;
@property (copy, nonatomic) id /* block */ animationDidStartBlock;
@property (copy, nonatomic) id /* block */ animationDidReachToValueBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ animationDidApplyBlock;
@property (nonatomic) BOOL removedOnCompletion;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) BOOL autoreverses;
@property (nonatomic) long long repeatCount;
@property (nonatomic) BOOL repeatForever;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)_init;
- (void)_initState;
- (void)dealloc;
- (id)valueForUndefinedKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)description;
- (id)debugDescription;
- (BOOL)_advance:(id)a0 currentTime:(double)a1 elapsedTime:(double)a2;
- (void)_appendDescription:(id)a0 debug:(BOOL)a1;
- (void).cxx_destruct;

@end
