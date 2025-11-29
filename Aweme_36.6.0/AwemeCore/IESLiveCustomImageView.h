@class NSString, IESLiveImageView;

@interface IESLiveCustomImageView : LynxUI

@property (nonatomic) BOOL isRendered;
@property (copy, nonatomic) NSString *lastSrc;
@property (copy, nonatomic) NSString *src;
@property (copy, nonatomic) NSString *imageMode;
@property (copy, nonatomic) NSString *placeholder;
@property (retain, nonatomic) IESLiveImageView *imageView;

+ (id)__lynx_prop_config__471;
+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__512;
+ (id)__lynx_prop_config__673;

- (void)propsDidUpdate;
- (BOOL)isLocalResource:(id)a0;
- (id)stringByRemoveScheme:(id)a0;
- (void)setSrc:(id)a0 requestReset:(BOOL)a1;
- (void)setImageMode:(id)a0 requestReset:(BOOL)a1;
- (void)setPlaceholder:(id)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (id)createView;

@end
