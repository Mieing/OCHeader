@class CAMediaTimingFunction;

@interface AWEIMMessageListLayoutConfig : NSObject <NSCopying>

@property (nonatomic) BOOL animated;
@property (nonatomic) double duration;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ coordinateAnimation;
@property (nonatomic) unsigned long long options;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;

+ (id)wrapper:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
