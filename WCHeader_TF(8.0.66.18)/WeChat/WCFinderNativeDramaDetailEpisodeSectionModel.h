@class NSArray;

@interface WCFinderNativeDramaDetailEpisodeSectionModel : NSObject

@property (nonatomic) unsigned long long nativeDramaID;
@property (retain, nonatomic) NSArray *episodes;
@property (nonatomic) unsigned long long selectedEpisodeID;

- (void).cxx_destruct;

@end
