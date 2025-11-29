@class NSURL, UIView;

@interface AWETokamakImageModel : NSObject

@property (readonly, nonatomic) long long width;
@property (readonly, nonatomic) long long height;
@property (readonly, nonatomic) long long footprint;
@property (readonly, nonatomic) long long fileSize;
@property (readonly, nonatomic) long long frameCount;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, weak, nonatomic) UIView *targetView;
@property (readonly, nonatomic) id userInfo;

- (id)initWithURL:(id)a0 footprint:(long long)a1 witdth:(long long)a2 height:(long long)a3 fileSize:(long long)a4 targetView:(id)a5 frameCount:(long long)a6 userInfo:(id)a7;
- (void).cxx_destruct;

@end
