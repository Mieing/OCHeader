@class NSDate;

@interface CdnPredownloadQuota : NSObject

@property (nonatomic) long long sizeInBytes;
@property (retain, nonatomic) NSDate *expiredDate;

- (void).cxx_destruct;

@end
