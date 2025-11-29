@interface AFDFamiliarTopElementAnimationConfig : NSObject

@property (nonatomic) BOOL needAnimation;
@property (nonatomic) double autoHideDuration;
@property (nonatomic) BOOL removeAfterHide;
@property (copy, nonatomic) id /* block */ showAnimation;
@property (copy, nonatomic) id /* block */ hideAnimation;
@property (nonatomic) unsigned long long fromElementType;
@property (nonatomic) unsigned long long toElementType;
@property (nonatomic) BOOL delayDefaultShowAnimation;

- (id)initWithNeedAnimation:(BOOL)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
