@class NSString;

@interface BEFViewInitParam : NSObject

@property (nonatomic) void *effectHandle;
@property (nonatomic) struct CGSize { double width; double height; } renderSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) unsigned long long fitMode;
@property (copy, nonatomic) NSString *bizId;
@property (nonatomic) long long fps;
@property (nonatomic) void /* function */ *resourceFinder;
@property (nonatomic) void /* function */ *resourceFinderReleaser;
@property (nonatomic) int sceneKey;
@property (nonatomic) BOOL neglectTouchEvent;

- (void).cxx_destruct;

@end
