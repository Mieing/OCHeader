@class BDXSeperateRenderContext;
@protocol LSIMBulletContainerPreLayoutDelegate;

@interface LSIMBulletContainerPreLayoutInfo : NSObject

@property (retain, nonatomic) BDXSeperateRenderContext *seperateRenderContext;
@property (weak, nonatomic) id<LSIMBulletContainerPreLayoutDelegate> delegate;
@property (nonatomic) double bulletRealHeight;
@property (nonatomic) double bulletRealWidth;

- (id)p_generateBDXRenderConfigWithContext:(id)a0;
- (void)prelayoutWithBulletContainerContext:(id)a0;
- (void).cxx_destruct;
- (void)resetInfo;

@end
