@class TTVideoEngineModel;

@interface BDXAudioVideoModel : NSObject

@property (nonatomic) unsigned long long encryptType;
@property (nonatomic) unsigned long long quality;
@property (retain, nonatomic) TTVideoEngineModel *videoEngineModel;

- (unsigned long long)_encryptType:(id)a0;
- (unsigned long long)_quality:(id)a0;
- (void).cxx_destruct;
- (id)initWithJSONDict:(id)a0;

@end
