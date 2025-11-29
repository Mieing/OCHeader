@class NSDate;

@interface WADownloadProgressInfo : NSObject

@property (copy, nonatomic) NSDate *date;
@property (nonatomic) long long totalBytesWritten;

- (void).cxx_destruct;

@end
