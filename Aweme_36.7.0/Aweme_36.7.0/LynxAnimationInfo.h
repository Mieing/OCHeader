@class NSString, CAMediaTimingFunction;

@interface LynxAnimationInfo : NSObject <NSCopying>

@property (copy, nonatomic) id /* block */ completeBlock;
@property (nonatomic) double duration;
@property (nonatomic) double delay;
@property (nonatomic) unsigned long long prop;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) double iterationCount;
@property (nonatomic) unsigned long long direction;
@property (retain, nonatomic) NSString *fillMode;
@property (nonatomic) unsigned long long playState;
@property (nonatomic) int orderIndex;

+ (id)copyAnimationInfo:(id)a0 withProp:(unsigned long long)a1;
+ (BOOL)isDirectionReverse:(id)a0;
+ (BOOL)isDirectionAlternate:(id)a0;
+ (BOOL)isFillModeRemoved:(id)a0;
+ (void)removeDuplicateAnimation:(id)a0 withKey:(unsigned long long)a1 sameToKey:(unsigned long long)a2;
+ (void)makePositionAndSizeTimingInfoConsistent:(id)a0 withPositionKey:(unsigned long long)a1 withSizeKey:(unsigned long long)a2;

- (BOOL)isEqualToKeyframeInfo:(id)a0;
- (BOOL)isOnlyPlayStateChanged:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithName:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
