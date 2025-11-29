@class NSString;

@interface AWEPCTRecorderDuetTaskCreator : NSObject <AWEPCTBusinessTaskCreatorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)configPublishModel:(id)a0;
+ (id)createTaskWithContext:(id)a0;
+ (id)group:(id)a0 guardRemote:(id)a1 completion:(id /* block */)a2;
+ (void)group:(id)a0 localVideo:(id)a1 completion:(id /* block */)a2;
+ (void)group:(id)a0 forStickers:(id)a1;
+ (void)configRecordInputData:(id)a0;
+ (void)configShootTrack:(id)a0;
+ (void)dealImageAlbumCurrentIndexWithAweme:(id)a0 duetResourceURI:(id)a1;
+ (void)downloadImageAlbumPictureFromAweme:(id)a0 selectImageIndex:(long long)a1 imageModel:(id)a2 mediaType:(long long)a3 completion:(id /* block */)a4;
+ (id)destinationURLForURI:(id)a0 mediaType:(long long)a1;


@end
