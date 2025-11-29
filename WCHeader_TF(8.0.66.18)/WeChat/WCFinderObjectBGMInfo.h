@class WCFinderMusicInfoModel, NSString;

@interface WCFinderObjectBGMInfo : NSObject <PBCoding>

@property (retain, nonatomic) WCFinderMusicInfoModel *musicInfo;
@property (copy, nonatomic) NSString *groupId;
@property (nonatomic) unsigned int hasBgm;
@property (nonatomic) unsigned long long postMusicType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_musicInfo;
+ (void)PBArrayAdd_groupId;
+ (void)PBArrayAdd_hasBgm;
+ (void)PBArrayAdd_postMusicType;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (id)initWithEditMusicInfo:(id)a0;
- (id)initWithFinderObjectBGMInfo:(id)a0;
- (id)genFinderObjectBGMInfo;
- (void).cxx_destruct;

@end
