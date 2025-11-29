@class HTSLiveImage;

@interface IESLiveDiggAnimationNode : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } location;
@property (retain, nonatomic) HTSLiveImage *avatarMedium;
@property (nonatomic) BOOL isAnchor;

- (void).cxx_destruct;

@end
