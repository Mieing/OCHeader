@class NSDictionary;

@interface IESLiveEffectPlayerVideoModel : NSObject

@property (nonatomic) struct CGSize { double width; double height; } originSizeOfRGBChannels;
@property (nonatomic) struct CGSize { double width; double height; } originSizeOfAlphaChannels;
@property (retain, nonatomic) NSDictionary *layers;

- (void).cxx_destruct;

@end
