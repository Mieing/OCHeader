@class NSTimer, NSString;

@interface BDPGameShareBusinessHandlerHg : NSObject <BDPShareBusinessHandler_HG>

@property (retain, nonatomic) NSTimer *timer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (id)sharedHandler;

- (void)handleShareBussinessForChannel:(id)a0 withParams:(id)a1 uniqueID:(id)a2 callback:(id /* block */)a3;
- (void)handleVideoShareWithPrepareModel:(id)a0 controller:(id)a1 videoPath:(id)a2 uniqueID:(id)a3 callback:(id /* block */)a4;
- (void)handlePhotoShareWithPrepareModel:(id)a0 photoArray:(id)a1 uniqueID:(id)a2 callback:(id /* block */)a3;
- (BOOL)shouleBanGameRecordVideoShareWithVideoPath:(id)a0 uniqueID:(id)a1 clickInterval:(long long)a2;
- (void)shareScreenRecordWithPrepareModel:(id)a0 controller:(id)a1 uniqueID:(id)a2 callback:(id /* block */)a3;
- (void).cxx_destruct;

@end
