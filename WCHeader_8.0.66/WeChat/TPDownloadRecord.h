@class NSString, NSDictionary;

@interface TPDownloadRecord : NSObject

@property (retain, nonatomic) NSString *cdnUip;
@property (retain, nonatomic) NSString *cdnIp;
@property (retain, nonatomic) NSString *cdnUrl;
@property (nonatomic) long long speed;
@property (nonatomic) long long maxSpeed;
@property (nonatomic) long long totalSpeed;
@property (nonatomic) long long totalSpeedCount;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (retain, nonatomic) NSString *protocol;
@property (retain, nonatomic) NSString *protocolVer;
@property (nonatomic) long long hitDownloaded;

- (void).cxx_destruct;

@end
