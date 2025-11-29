@class NSString;

@interface AWESearchVoiceTranslateResultInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *text;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) BOOL isInterIM;
@property (nonatomic) BOOL isSoftFinished;
@property (nonatomic) long long indexOfOneConnection;
@property (nonatomic) double confidence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
