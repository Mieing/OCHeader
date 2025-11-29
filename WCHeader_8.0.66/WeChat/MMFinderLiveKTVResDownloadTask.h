@class MMFinderLiveKTVSongItem, NSArray, NSMutableDictionary;

@interface MMFinderLiveKTVResDownloadTask : NSObject

@property (retain, nonatomic) MMFinderLiveKTVSongItem *songItem;
@property (retain, nonatomic) NSArray *necessaryResources;
@property (nonatomic) unsigned long long songResourceTypes;
@property (retain, nonatomic) NSMutableDictionary *necessaryResDownloadResultDict;

- (id)init;
- (BOOL)recordNecessaryRes:(unsigned int)a0 downloadResult:(int)a1;
- (id)getNecessaryResDownloadResult:(unsigned int)a0;
- (BOOL)isResourceNeccessary:(unsigned int)a0;
- (void).cxx_destruct;

@end
