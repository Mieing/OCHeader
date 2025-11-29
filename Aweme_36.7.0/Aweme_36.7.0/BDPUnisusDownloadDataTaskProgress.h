@class NSMutableData;

@interface BDPUnisusDownloadDataTaskProgress : NSObject

@property (nonatomic) long long countOfBytesReceived;
@property (nonatomic) long long countOfBytesExpectedToReceive;
@property (retain, nonatomic) NSMutableData *totalData;

- (void).cxx_destruct;
- (id)init;

@end
