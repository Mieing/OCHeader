@class AWEMusicModel, AWEUnifiedMusicGroupModel;

@interface AWETrendDetailMusicItemModel : NSObject

@property (retain, nonatomic) AWEMusicModel *musicModel;
@property (retain, nonatomic) AWEUnifiedMusicGroupModel *unifiedMusicGroupModel;
@property (nonatomic) unsigned long long musicInfoType;
@property (nonatomic) BOOL musicBanClick;

- (void).cxx_destruct;

@end
