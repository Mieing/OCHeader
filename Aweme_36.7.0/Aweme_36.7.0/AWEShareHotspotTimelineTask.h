@class UIImage;

@interface AWEShareHotspotTimelineTask : AWEShareWebTask

@property (retain, nonatomic) UIImage *headerImage;
@property (retain, nonatomic) UIImage *snapshotImage;
@property (nonatomic) double roundedOffset;

+ (id)taskWithWebModel:(id)a0;
+ (void)configHotSpotChannelWithContext:(id)a0;
+ (id)removeType:(id)a0 InChannels:(id)a1;

- (void)prepareWithChannel:(id)a0 inView:(id)a1;
- (id)p_finalImageWithoutQRCodeImage;
- (id)p_drawBottomBarImageWithWidth:(double)a0;
- (void).cxx_destruct;

@end
