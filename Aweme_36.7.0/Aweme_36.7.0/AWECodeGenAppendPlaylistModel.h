@class NSString;

@interface AWECodeGenAppendPlaylistModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *appendBeforeBtnText;
@property (copy, nonatomic) NSString *appendAfterBtnText;
@property (nonatomic) long long playlistTrackCount;
@property (copy, nonatomic) NSString *playlistTitleBefore;
@property (copy, nonatomic) NSString *playlistTitleAfter;
@property (copy, nonatomic) NSString *playlistSubTitle;
@property (nonatomic) int collectStatus;
@property (copy, nonatomic) NSString *playlistId;
@property (nonatomic) int middlePageStyle;
@property (copy, nonatomic) NSString *playlistFallbackTitleBefore;
@property (copy, nonatomic) NSString *playlistFallbackTitleAfter;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
