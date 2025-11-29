@class FavoritesItemDataField, NSString, FavStreamVideoItem, FavoritesItem, WCPlayerPlayArgs;

@interface FavSightInfo : NSObject

@property (retain, nonatomic) NSString *dataPath;
@property (retain, nonatomic) NSString *thumbPath;
@property (retain, nonatomic) FavStreamVideoItem *streamVideoItem;
@property (nonatomic) int duration;
@property (retain, nonatomic) NSString *statExtStr;
@property (nonatomic) int type;
@property (nonatomic) int illegalType;
@property (nonatomic) long long dataSize;
@property (retain, nonatomic) NSString *videoUrl;
@property (retain, nonatomic) NSString *thumbUrl;
@property (retain, nonatomic) FavoritesItem *favItem;
@property (retain, nonatomic) FavoritesItemDataField *favData;
@property (nonatomic) BOOL needLazyDownload;
@property (nonatomic) BOOL muted;
@property (retain, nonatomic) WCPlayerPlayArgs *playArgs;

+ (id)createSightInfoWithData:(id)a0 AndItem:(id)a1;

- (void).cxx_destruct;

@end
