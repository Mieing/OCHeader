@class BDXSeperateRenderContext;
@protocol IESIMBulletContainerPreLayoutInfoDelegate;

@interface IESIMBulletContainerPreLayoutInfo : NSObject

@property (weak, nonatomic) id<IESIMBulletContainerPreLayoutInfoDelegate> delegate;
@property (nonatomic) long long preloadScene;
@property (nonatomic) BOOL layoutFinish;
@property (nonatomic) unsigned long long preLayoutDuration;
@property (nonatomic) double bulletRealHeight;
@property (nonatomic) double bulletRealWidth;
@property (retain, nonatomic) BDXSeperateRenderContext *seperateRenderContext;

- (void).cxx_destruct;
- (void)resetInfo;

@end
