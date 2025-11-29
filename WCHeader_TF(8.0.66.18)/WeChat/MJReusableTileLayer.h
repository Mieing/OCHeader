@class MJTileReusableAttributes;

@interface MJReusableTileLayer : CALayer

@property (retain, nonatomic) MJTileReusableAttributes *reusableAttributes;

- (void)prepareForReuse;
- (void).cxx_destruct;

@end
