@class IESMMAudioFilter;

@interface LVVEAudioFilterCache : NSObject

@property (retain, nonatomic) IESMMAudioFilter *filter;
@property (nonatomic, getter=isVideo) BOOL video;

- (id)initWithFilter:(id)a0 forVideo:(BOOL)a1;
- (void).cxx_destruct;

@end
