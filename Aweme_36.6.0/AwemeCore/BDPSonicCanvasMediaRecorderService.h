@class BDPUniqueID;

@interface BDPSonicCanvasMediaRecorderService : SonicMediaRecorderService

@property (retain, nonatomic) BDPUniqueID *uniqueID;

- (id)getVideoPath;
- (void)requestAuthorizationWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)isGranted;
- (id)initWithUniqueID:(id)a0;

@end
