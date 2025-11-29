@protocol MMAnimatedImagePlayObserver;

@interface MMAnimatedImagePlayConfig : NSObject <NSCopying>

@property (nonatomic) BOOL needCache;
@property (nonatomic) double maxCacheWidth;
@property (nonatomic) BOOL asyncLoadFirstFrame;
@property (nonatomic) unsigned long long playMode;
@property (nonatomic) unsigned int animationRepeatCount;
@property (nonatomic) unsigned long long playEndBehavior;
@property (weak, nonatomic) id<MMAnimatedImagePlayObserver> observer;

+ (id)defaultConfig;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
