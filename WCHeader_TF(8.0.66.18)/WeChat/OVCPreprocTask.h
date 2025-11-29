@class NSString;

@interface OVCPreprocTask : NSObject

@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) NSString *filePath;
@property (readonly, nonatomic) long long assetMediaType;
@property (readonly, nonatomic) int priority;
@property (readonly, nonatomic) unsigned long long transcodePolicy;
@property (nonatomic) unsigned long long transcodeDimensionLevel;
@property (nonatomic) BOOL isAudioAnalysisEnabled;
@property (readonly, nonatomic) NSString *analysisParams;

+ (id)taskWithLocalIdentifier:(id)a0 priority:(int)a1 transcodePolicy:(unsigned long long)a2 analysisParams:(id)a3;
+ (id)taskWithFilePath:(id)a0 assetMediaType:(long long)a1 priority:(int)a2 transcodePolicy:(unsigned long long)a3 analysisParams:(id)a4;

- (id)initWithLocalIdentifier:(id)a0 priority:(int)a1 transcodePolicy:(unsigned long long)a2 analysisParams:(id)a3;
- (id)initWithFilePath:(id)a0 assetMediaType:(long long)a1 priority:(int)a2 transcodePolicy:(unsigned long long)a3 analysisParams:(id)a4;
- (void).cxx_destruct;

@end
