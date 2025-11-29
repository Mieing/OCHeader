@class NSString, FinderMusicBaikeSummary;

@interface WCFinderProfileMusicianInfo : NSObject <PBCoding>

@property (retain, nonatomic) FinderMusicBaikeSummary *summary;
@property (nonatomic) BOOL hasPlaylist;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_summary;
+ (void)PBArrayAdd_hasPlaylist;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
