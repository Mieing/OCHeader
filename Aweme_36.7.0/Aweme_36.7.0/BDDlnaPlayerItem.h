@class NSString, NSDictionary;

@interface BDDlnaPlayerItem : NSObject

@property (copy, nonatomic) NSString *localPath;
@property (copy, nonatomic) NSString *mediaURLString;
@property (nonatomic) unsigned long long mediaType;
@property (copy, nonatomic) NSString *mediaName;
@property (copy, nonatomic) NSString *publisher;
@property (nonatomic) long long startPosition;
@property (readonly, copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSDictionary *customDlnaXmlElementDictionary;
@property (copy, nonatomic) NSString *refererHeader;
@property (nonatomic) BOOL loopPlay;
@property (copy, nonatomic) NSString *aesKey;
@property (copy, nonatomic) NSString *aesIv;
@property (copy, nonatomic) NSString *mediaArtist;
@property (copy, nonatomic) NSString *mediaAlbum;
@property (copy, nonatomic) NSString *mediaAlbumUrl;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL bullet;
@property (nonatomic) float speed;

- (id)playParam;
- (void).cxx_destruct;
- (id)init;

@end
