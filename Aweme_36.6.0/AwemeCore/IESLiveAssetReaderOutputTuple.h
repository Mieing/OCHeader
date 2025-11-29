@class AVAssetReaderTrackOutput, AVAssetReader, AVAssetTrack;

@interface IESLiveAssetReaderOutputTuple : NSObject

@property (retain, nonatomic) AVAssetReader *reader;
@property (retain, nonatomic) AVAssetReaderTrackOutput *output;
@property (retain, nonatomic) AVAssetTrack *videoTrack;

- (void).cxx_destruct;

@end
