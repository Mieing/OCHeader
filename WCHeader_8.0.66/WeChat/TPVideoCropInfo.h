@interface TPVideoCropInfo : NSObject

@property (readonly, nonatomic) long long width;
@property (readonly, nonatomic) long long height;
@property (readonly, nonatomic) long long cropLeft;
@property (readonly, nonatomic) long long cropRight;
@property (readonly, nonatomic) long long cropTop;
@property (readonly, nonatomic) long long cropBottom;

- (id)initWithWidth:(long long)a0 height:(long long)a1 cropLeft:(long long)a2 cropRight:(long long)a3 cropTop:(long long)a4 cropBottom:(long long)a5;

@end
