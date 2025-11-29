@class NSNumber, NSArray;

@interface LOTMaskContainer : CALayer {
    NSArray *_masks;
}

@property (retain, nonatomic) NSNumber *currentFrame;

- (id)initWithMasks:(id)a0;
- (void).cxx_destruct;

@end
