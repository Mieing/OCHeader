@class MusicCardTopLabelV2, NSString, MusicCardUrlModelV2, MusicCardShareInfoV2, NSMutableArray;

@interface MusicCardInfoV2 : GPBMessage

@property (copy, nonatomic) NSString *songId;
@property (nonatomic) BOOL hasSongId;
@property (retain, nonatomic) MusicCardShareInfoV2 *shareInfo;
@property (nonatomic) BOOL hasShareInfo;
@property (copy, nonatomic) NSString *artistNames;
@property (nonatomic) BOOL hasArtistNames;
@property (retain, nonatomic) NSMutableArray *lunaColorArray;
@property (readonly, nonatomic) unsigned long long lunaColorArray_Count;
@property (copy, nonatomic) NSString *lyricId;
@property (nonatomic) BOOL hasLyricId;
@property (copy, nonatomic) NSString *sortLabelKey;
@property (nonatomic) BOOL hasSortLabelKey;
@property (copy, nonatomic) NSString *labelText;
@property (nonatomic) BOOL hasLabelText;
@property (nonatomic) int offset;
@property (nonatomic) BOOL hasOffset;
@property (nonatomic) int tiggerDigg;
@property (nonatomic) BOOL hasTiggerDigg;
@property (copy, nonatomic) NSString *feData;
@property (nonatomic) BOOL hasFeData;
@property (copy, nonatomic) NSString *labelSchema;
@property (nonatomic) BOOL hasLabelSchema;
@property (copy, nonatomic) NSString *laterListenText;
@property (nonatomic) BOOL hasLaterListenText;
@property (retain, nonatomic) MusicCardUrlModelV2 *albumCover;
@property (nonatomic) BOOL hasAlbumCover;
@property (retain, nonatomic) MusicCardTopLabelV2 *topLabel;
@property (nonatomic) BOOL hasTopLabel;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL hasExtra;

+ (id)descriptor;

@end
