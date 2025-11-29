@class NSString, ACCURS, NSURL, AVAsset;

@interface AEKAudioResource : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) ACCURS *urs;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (retain, nonatomic) AVAsset *asset;

- (id)initWithType:(unsigned long long)a0 url:(id)a1 name:(id)a2 urs:(id)a3;
- (void).cxx_destruct;

@end
