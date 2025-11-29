@class VEAlgorithmSession;

@interface AWEIMAIFaceDetectProcessor : NSObject

@property (retain, nonatomic) VEAlgorithmSession *algorithmSession;

- (BOOL)checkFaceImageForMixPhoto:(id)a0;
- (void)runAlgorithmImagePath:(id)a0 effectModelFilePath:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
