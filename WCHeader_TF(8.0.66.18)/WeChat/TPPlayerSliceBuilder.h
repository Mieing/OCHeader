@class TPPlayerSlice;

@interface TPPlayerSliceBuilder : NSObject

@property (retain, nonatomic) TPPlayerSlice *model;

- (id)init;
- (id)url;
- (id)setUrl:(id)a0;
- (id)httpHeader;
- (id)setHttpHeader:(id)a0;
- (long long)durationUs;
- (id)setDurationUs:(long long)a0;
- (id)build;
- (void).cxx_destruct;

@end
