@class NSBundle;

@interface AWEUserBundle : NSObject

@property (class, readonly, nonatomic) NSBundle *mainBundle;

+ (id)pathForResource:(id)a0 ofType:(id)a1;

@end
