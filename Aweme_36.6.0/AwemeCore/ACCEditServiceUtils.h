@interface ACCEditServiceUtils : NSObject

+ (id)p_publishConfigWithIsMV:(BOOL)a0 publishModel:(id)a1;
+ (BOOL)hasLyricSticker:(id)a0;
+ (id)editServiceOnlyForPublishWithPublishModel:(id)a0 isMV:(BOOL)a1;
+ (id)editServiceForPublishTaskWithPublishModel:(id)a0;
+ (void)dismissPreviewEdge:(id)a0 publishModel:(id)a1;
+ (void)startAutoplayWithKey:(id)a0 slidePlayControl:(id)a1 editService:(id)a2;
+ (void)stopAutoplayWithKey:(id)a0 slidePlayControl:(id)a1 editService:(id)a2;

@end
