@class IESECVideoPlayerConfig;

@interface IESECVideoPlayerViewRequest : NSObject

@property (retain, nonatomic) IESECVideoPlayerConfig *playerConfig;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;

- (void).cxx_destruct;

@end
