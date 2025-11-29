@class NSString, ABAReportPrams;

@interface MMAssetCompositeSession : NSObject

@property (copy, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *outputFilePath;
@property (retain, nonatomic) ABAReportPrams *reportParams;

- (id)initWithSessionId:(id)a0;
- (void).cxx_destruct;

@end
