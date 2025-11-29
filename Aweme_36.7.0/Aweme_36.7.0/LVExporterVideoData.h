@class LVMediaDraft, HTSVideoData;

@interface LVExporterVideoData : NSObject

@property (readonly, nonatomic) HTSVideoData *videoData;
@property (readonly, nonatomic) LVMediaDraft *draft;

- (id)initWithVideoData:(id)a0 draft:(id)a1;
- (void).cxx_destruct;

@end
