@class NSMutableArray;

@interface MMFinderLiveKTVSongResourceInfo : NSObject

@property (retain, nonatomic) NSMutableArray *resources;
@property (nonatomic) int songQuality;
@property (nonatomic) int accompanyQuality;
@property (readonly, nonatomic) BOOL completed;

+ (void)buildSongResourceInfo:(id)a0 withResourceInfo:(id)a1;

- (id)description;
- (BOOL)hasResource:(unsigned int)a0;
- (void).cxx_destruct;

@end
