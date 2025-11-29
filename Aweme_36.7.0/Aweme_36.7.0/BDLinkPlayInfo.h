@class NSString, NSDictionary, NSArray;

@interface BDLinkPlayInfo : NSObject

@property (nonatomic) unsigned long long mediaType;
@property (copy, nonatomic) NSString *remoteUrl;
@property (copy, nonatomic) NSString *originUrl;
@property (copy, nonatomic) NSString *localPath;
@property (nonatomic) unsigned int startPosition;
@property (copy, nonatomic) NSString *mediaTitle;
@property (copy, nonatomic) NSString *mediaArtist;
@property (copy, nonatomic) NSString *mediaAlbum;
@property (copy, nonatomic) NSString *mediaAlbumUrl;
@property (nonatomic) BOOL loopPlay;
@property (copy, nonatomic) NSString *aesKey;
@property (copy, nonatomic) NSString *aesIv;
@property (nonatomic) float speed;
@property (nonatomic) BOOL bullet;
@property (copy, nonatomic) NSString *refererHeader;
@property (nonatomic) unsigned int tag;
@property (readonly, copy, nonatomic) NSString *uuid;
@property (readonly, copy, nonatomic) NSDictionary *dictionary;
@property (readonly, copy, nonatomic) NSString *infoString;
@property (readonly, copy, nonatomic) NSString *playingUrl;
@property (copy, nonatomic) NSArray *dramaItemArray;

- (void).cxx_destruct;
- (id)init;

@end
