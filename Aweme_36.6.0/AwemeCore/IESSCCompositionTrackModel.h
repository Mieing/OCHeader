@class NSDictionary, AVCompositionTrack;

@interface IESSCCompositionTrackModel : NSObject

@property (retain, nonatomic) AVCompositionTrack *track;
@property (retain, nonatomic) NSDictionary *preferredTransforms;

- (id)initWithTrack:(id)a0 transforms:(id)a1;
- (void).cxx_destruct;

@end
