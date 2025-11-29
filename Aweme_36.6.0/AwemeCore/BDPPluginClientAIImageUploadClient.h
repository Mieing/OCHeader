@class BDImageXUploaderClient;

@interface BDPPluginClientAIImageUploadClient : NSObject {
    BDImageXUploaderClient *_realClient;
}

@property (copy, nonatomic) id /* block */ uploadCompletion;
@property (nonatomic) double authDuration;
@property (nonatomic) double uploadStartTime;

- (void).cxx_destruct;

@end
