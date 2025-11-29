@class NSString;

@interface FavRecordVideoNodeView : FavRecordLeftThumbRightLabelNodeView <MMImageLoaderObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)addContentSubView;
- (void)addVideoThumbView;
- (id)getVideoTimeByDuration:(unsigned int)a0;
- (id)getThumbImageView;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;

@end
