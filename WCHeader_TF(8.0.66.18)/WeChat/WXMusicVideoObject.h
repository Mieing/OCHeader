@class NSString, NSData;

@interface WXMusicVideoObject : NSObject

@property (copy, nonatomic) NSString *musicUrl;
@property (copy, nonatomic) NSString *musicDataUrl;
@property (copy, nonatomic) NSString *singerName;
@property (copy, nonatomic) NSString *songLyric;
@property (retain, nonatomic) NSData *hdAlbumThumbData;
@property (copy, nonatomic) NSString *hdAlbumThumbFileHash;
@property (copy, nonatomic) NSString *albumName;
@property (copy, nonatomic) NSString *musicGenre;
@property (nonatomic) unsigned long long issueDate;
@property (copy, nonatomic) NSString *identification;
@property (nonatomic) unsigned int duration;
@property (retain, nonatomic) NSString *musicOperationUrl;

+ (id)object;

- (void).cxx_destruct;

@end
