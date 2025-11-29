@class NSString, IESMMAudioFilter;

@interface NLEVEAudioFilterCache : NSObject

@property (retain, nonatomic) IESMMAudioFilter *filter;
@property (nonatomic, getter=isVideo) BOOL video;
@property (copy, nonatomic) NSString *nleFilterKey;

- (id)initWithFilter:(id)a0 forVideo:(BOOL)a1;
- (void).cxx_destruct;

@end
