@class AWELiveWebImage, NSString;

@interface AWELiveWebPDecoder : NSObject <IESLiveWebPDecoder>

@property (retain, nonatomic) AWELiveWebImage *bdImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)frameCount;
- (id)initWithData:(id)a0 scale:(double)a1;
- (id)image;
- (id)animatedImage;
- (BOOL)isAnimatedImage;
- (id)frameAtIndex:(long long)a0;

@end
