@class NSString;

@interface BTVideoItemCellAutoPlayReportData : MMObject

@property (copy, nonatomic) NSString *mpUrl;
@property (copy, nonatomic) NSString *vid;
@property (nonatomic) unsigned long long absolutePosition;
@property (nonatomic) unsigned long long playDuration;
@property (nonatomic) unsigned long long videoDuration;

- (void).cxx_destruct;

@end
