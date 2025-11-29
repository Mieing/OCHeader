@class NSString;

@interface AWEAdLinkTagRenderer : NSObject <AWEAdLinkTagRenderer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tagImageWithAweme:(id)a0 constrainedWidth:(double)a1 inScene:(long long)a2;
+ (struct CGSize { double x0; double x1; })tagSizeWithAweme:(id)a0 constrainedWidth:(double)a1 inScene:(long long)a2;
+ (id)tagWithAweme:(id)a0 constrainedWidth:(double)a1 inSecene:(long long)a2;
+ (id)imageWithTag:(id)a0;
+ (id)tagImageWithAweme:(id)a0 inScene:(long long)a1;
+ (struct CGSize { double x0; double x1; })tagSizeWithAweme:(id)a0 inScene:(long long)a1;


@end
