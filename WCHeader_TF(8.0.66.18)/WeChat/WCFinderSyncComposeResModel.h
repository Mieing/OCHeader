@class NSError, NSString, ABAReportPrams;

@interface WCFinderSyncComposeResModel : NSObject

@property (nonatomic) BOOL bResult;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *outputFile;
@property (retain, nonatomic) ABAReportPrams *videoScoreParams;

- (void).cxx_destruct;

@end
