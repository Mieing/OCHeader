@class NSString;

@interface BDCastPlayCommand : NSObject

@property (nonatomic) unsigned long long mediaType;
@property (copy, nonatomic) NSString *remoteUrl;
@property (copy, nonatomic) NSString *localPath;
@property (nonatomic) unsigned int startPosition;
@property (copy, nonatomic) NSString *mediaTitle;
@property (copy, nonatomic) NSString *mediaArtist;
@property (copy, nonatomic) NSString *mediaAlbum;
@property (copy, nonatomic) NSString *mediaAlbumUrl;
@property (nonatomic) BOOL loopPlay;
@property (copy, nonatomic) NSString *meta;
@property (copy, nonatomic) NSString *aesKey;
@property (copy, nonatomic) NSString *aesIv;
@property (nonatomic) double speed;
@property (nonatomic) BOOL bullet;
@property (copy, nonatomic) NSString *refererHeader;
@property (nonatomic) unsigned int tag;
@property (copy, nonatomic) NSString *connectionId;

- (id)initWithDic:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
