@class NSArray;

@interface NLEMediaInfo_OC : NSObject

@property (readonly, nonatomic) long long duration;
@property (retain, nonatomic) NSArray *videoStreamInfo;
@property (retain, nonatomic) NSArray *audioStreamInfo;

- (void).cxx_destruct;

@end
