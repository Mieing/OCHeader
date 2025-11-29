@class NSString, NSData, WXMusicVipInfo;

@interface WXMusicVideoObject : NSObject

@property (copy, nonatomic) NSString *musicUrl;
@property (copy, nonatomic) NSString *musicDataUrl;
@property (copy, nonatomic) NSString *singerName;
@property (nonatomic) unsigned int duration;
@property (copy, nonatomic) NSString *songLyric;
@property (retain, nonatomic) NSData *hdAlbumThumbData;
@property (copy, nonatomic) NSString *hdAlbumThumbFileHash;
@property (copy, nonatomic) NSString *albumName;
@property (copy, nonatomic) NSString *musicGenre;
@property (nonatomic) unsigned long long issueDate;
@property (copy, nonatomic) NSString *identification;
@property (copy, nonatomic) NSString *musicOperationUrl;
@property (retain, nonatomic) WXMusicVipInfo *musicVipInfo;

+ (id)object;

- (void).cxx_destruct;

@end
