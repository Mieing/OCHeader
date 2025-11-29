@class BmfSuperResolution;

@interface BDImageBMFSRStorage : NSObject

@property (retain, nonatomic) BmfSuperResolution *srProcess;
@property (nonatomic) int scaleMode;

- (void).cxx_destruct;

@end
