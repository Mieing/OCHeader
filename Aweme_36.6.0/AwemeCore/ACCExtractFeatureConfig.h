@class NSString, NSArray;
@protocol ACCExtractFeatureTaskProtocol;

@interface ACCExtractFeatureConfig : NSObject

@property (copy, nonatomic) NSString *bizId;
@property (nonatomic) unsigned long long subType;
@property (nonatomic) BOOL ignoreCache;
@property (nonatomic) BOOL pureMode;
@property (retain, nonatomic) id<ACCExtractFeatureTaskProtocol> outerTask;
@property (nonatomic) struct CGSize { double width; double height; } frameSize;
@property (copy, nonatomic) NSArray *frames;
@property (copy, nonatomic) NSArray *algorithms;
@property (nonatomic) unsigned long long materialsArrayType;
@property (nonatomic) BOOL c3FeatureEnabled;
@property (nonatomic) BOOL ilaRealTimeFeatureExtractionEnabled;
@property (nonatomic) BOOL ilaFeatureSaveDB;

- (id)bizType;
- (void).cxx_destruct;

@end
