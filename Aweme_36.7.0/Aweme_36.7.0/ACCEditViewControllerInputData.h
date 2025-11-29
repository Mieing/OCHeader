@class NSString, NSArray, UIImage, AWEVideoPublishViewModel, ACCImageAlbumEditInputData;
@protocol ACCMusicModelProtocol, ACCEditServiceProtocol;

@interface ACCEditViewControllerInputData : NSObject <FPCreationModel, ACCBusinessInputData>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEVideoPublishViewModel *sourceModel;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (weak, nonatomic) AWEVideoPublishViewModel *recorderPublishModel;
@property (retain, nonatomic) ACCImageAlbumEditInputData *imageAlbumEditInputData;
@property (retain, nonatomic) UIImage *coverImage;
@property (nonatomic) BOOL showGuideBubble;
@property (nonatomic) BOOL playImmediately;
@property (nonatomic) BOOL enterFromShoot;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (retain, nonatomic) id<ACCMusicModelProtocol> music;
@property (copy, nonatomic) NSArray *musicList;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (nonatomic) long long launchType;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } playerTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fp_getReaderWithProtocol:(id)a0;
- (id)fp_getRepoServiceWithAPI:(id)a0;
- (id)fp_getWriterWithClass:(Class)a0;
- (id)createId;
- (long long)inputDataType;
- (void).cxx_destruct;

@end
