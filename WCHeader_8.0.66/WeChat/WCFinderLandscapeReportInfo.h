@interface WCFinderLandscapeReportInfo : NSObject

@property (nonatomic) unsigned long long rotateToLandscapeTimeStampMs;
@property (nonatomic) double rotateToLandscapeVideoProgress;

- (id)genReportDictWithLandScapeEnterType:(unsigned long long)a0;

@end
