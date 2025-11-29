@interface ACCPublishSaveLocalServiceConfig : NSObject

@property (copy, nonatomic) id /* block */ saveLocalConfigurationProvider;
@property (nonatomic) BOOL disableDownloadTrackEvent;
@property (nonatomic) BOOL saveDraftIfNeeded;
@property (nonatomic) BOOL onlySaveAlbum;

- (void).cxx_destruct;

@end
