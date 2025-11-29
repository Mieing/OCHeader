@class NSString, POIMediaPlayerVideoModel, POIMediaPlayerAlbumModel;

@interface POIMediaPlayerModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *mediaID;
@property (copy, nonatomic) NSString *authorID;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) POIMediaPlayerVideoModel *video;
@property (retain, nonatomic) POIMediaPlayerAlbumModel *album;
@property (copy, nonatomic) NSString *createSource;
@property (copy, nonatomic) NSString *updateSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
