@class NSString;

@interface AWEMusicAppendPlaylistInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *playlistID;
@property (copy, nonatomic) NSString *appendBeforeText;
@property (copy, nonatomic) NSString *appendAfterText;
@property (nonatomic) long long playlistTrackCount;
@property (copy, nonatomic) NSString *playlistTitleBefore;
@property (copy, nonatomic) NSString *playlistTitleAfter;
@property (copy, nonatomic) NSString *playlistFallbackTitleBefore;
@property (copy, nonatomic) NSString *playlistFallbackTitleAfter;
@property (copy, nonatomic) NSString *playlistSubtitle;
@property (nonatomic) long long collectStatus;
@property (nonatomic) unsigned long long middlePageStyle;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
