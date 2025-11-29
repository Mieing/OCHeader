@class NSString, NSDictionary, BDByteCastPlayerAesModel, NSArray, BDByteCastPPDanmakuBean, BDByteCastPlayerMediaAssetItem;

@interface BDByteCastPlayerItem : NSObject

@property (nonatomic) unsigned long long mediaType;
@property (copy, nonatomic) NSString *mediaURLString;
@property (nonatomic) long long startPosition;
@property (retain, nonatomic) NSDictionary *headerInfo;
@property (retain, nonatomic) BDByteCastPlayerAesModel *aesModel;
@property (copy, nonatomic) NSString *mediaId;
@property (copy, nonatomic) NSString *mediaName;
@property (copy, nonatomic) NSString *mediaDirector;
@property (copy, nonatomic) NSString *mediaActor;
@property (copy, nonatomic) NSString *publisher;
@property (retain, nonatomic) BDByteCastPlayerMediaAssetItem *mediaAssetItem;
@property (copy, nonatomic) NSString *mediaAlbum;
@property (copy, nonatomic) NSString *mediaAlbumUrl;
@property (copy, nonatomic) NSDictionary *customDlnaXmlElementDictionary;
@property (readonly, copy, nonatomic) NSString *infoString;
@property (readonly, copy, nonatomic) NSString *playingUrl;
@property (nonatomic) long long startIndex;
@property (copy, nonatomic) NSArray *dramaItemArray;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL loopPlay;
@property (nonatomic) float speed;
@property (nonatomic) long long loopMode;
@property (nonatomic) long long shuffle;
@property (nonatomic) long long stretch;
@property (nonatomic) long long skipHeadTail;
@property (nonatomic) long long inheritConfig;
@property (nonatomic) long long featureConfig;
@property (retain, nonatomic) BDByteCastPPDanmakuBean *danmaku;
@property (nonatomic) BOOL bullet;
@property (copy, nonatomic) NSString *localPath;
@property (copy, nonatomic) NSString *urlType;
@property (nonatomic) BOOL fakePlay;
@property (nonatomic) BOOL forcePlay;
@property (copy, nonatomic) id /* block */ displayViewController;

- (id)dramaBeans;
- (id)mediaAssetBean;
- (id)playControlInfo;
- (id)generateDlnaPlayerItem;
- (id)generateLinkPlayInfo;
- (id)generateAirPlayPlayerItem;
- (id)generateAirPlayDisplayPlayerItem;
- (id)generateBDLEPlayerItem;
- (id)ppSubtitle;
- (id)ppSkipInfo;
- (id)urlBean;
- (void).cxx_destruct;
- (id)init;

@end
