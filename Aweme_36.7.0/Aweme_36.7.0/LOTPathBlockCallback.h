@class NSString;

@interface LOTPathBlockCallback : NSObject <LOTPathValueDelegate>

@property (copy, nonatomic) id /* block */ callback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)withBlock:(id /* block */)a0;

- (struct CGPath { } *)pathForFrame:(double)a0 startKeyframe:(double)a1 endKeyframe:(double)a2 interpolatedProgress:(double)a3;
- (void).cxx_destruct;

@end
