@class NSString;

@interface TPSubtitleData : NSObject

@property (readonly, copy, nonatomic) NSString *subtitleData;
@property (readonly, nonatomic) long long durationMs;
@property (readonly, nonatomic) long long startPositionMs;
@property (readonly, nonatomic) long long trackIndex;

- (id)initWithData:(id)a0 durationMs:(long long)a1 startPositionMs:(long long)a2 trackIndex:(long long)a3;
- (void).cxx_destruct;

@end
