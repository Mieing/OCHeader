@class IESECGalleryBar, NSString, CADisplayLink;

@interface IESECMallInnerFeedPageControl : UIView <IESECGalleryBarDelegate> {
    double _currentProgress;
    CADisplayLink *_displayLink;
}

@property (retain, nonatomic) IESECGalleryBar *galleryBar;
@property (copy, nonatomic) id /* block */ scrollToIndexBlock;
@property (nonatomic) long long currentItem;
@property (nonatomic) double currentBarProgress;
@property (nonatomic) long long numberOfItems;
@property (nonatomic) BOOL isManualSlided;
@property (nonatomic) BOOL hasFakeData;
@property (nonatomic) BOOL hasVideoPlay;
@property (nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateItemAtIndex:(unsigned long long)a0 toProgress:(double)a1;
- (void)stopAutoSlide;
- (void)startAutoSlide;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;

@end
