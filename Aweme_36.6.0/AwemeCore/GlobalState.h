@class NSString;

@interface GlobalState : NSObject

@property (nonatomic) double screenWidth;
@property (nonatomic) double screenHeight;
@property (nonatomic) double viewportWidth;
@property (nonatomic) double viewportHeight;
@property (nonatomic) double devicePixelRatio;
@property (nonatomic) double fontScale;
@property (nonatomic) BOOL nightMode;
@property (retain, nonatomic) NSString *platform;
@property (retain, nonatomic) NSString *relaxVersion;

- (id)initWithscreenWidth:(double)a0 screenHeight:(double)a1 viewportWidth:(double)a2 viewportHeight:(double)a3 devicePixelRatio:(double)a4 fontScale:(double)a5 nightMode:(BOOL)a6 platform:(id)a7 relaxVersion:(id)a8;
- (void).cxx_destruct;

@end
