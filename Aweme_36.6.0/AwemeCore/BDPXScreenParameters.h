@interface BDPXScreenParameters : NSObject

@property (nonatomic) BOOL isCanDragUp;
@property (nonatomic) BOOL isCanDragDown;
@property (nonatomic) BOOL forbbidenDragDownWhenFullSize;
@property (nonatomic) BOOL isSecondFullScreen;
@property (nonatomic) unsigned long long customButtonType;
@property (nonatomic) BOOL isUseDimmingBackground;
@property (nonatomic) BOOL enableOffsetView;
@property (nonatomic) double XScreenRate;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL closeTouchOutside;
@property (nonatomic) BOOL isEnterFromSchema;
@property (nonatomic) BOOL isCurrentSmallScreen;
@property (nonatomic) BOOL isNeededResize;

- (void)buildDefaultParams;
- (id)initWithXScreenRate:(double)a0;
- (id)init;

@end
