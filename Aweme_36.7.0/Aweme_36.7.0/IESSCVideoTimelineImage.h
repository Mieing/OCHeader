@class IESSCMetalImage;
@protocol IESSCVideoTimelineTrack;

@interface IESSCVideoTimelineImage : NSObject

@property (retain, nonatomic) IESSCMetalImage *image;
@property (retain, nonatomic) id<IESSCVideoTimelineTrack> track;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } preferredTransform;

- (void).cxx_destruct;

@end
