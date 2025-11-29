@class NSString;

@interface SAMICore_WSocketConnectPoolParameter : NSObject

@property (retain, nonatomic) NSString *business;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) int enable;
@property (nonatomic) int poolSize;
@property (nonatomic) int retryCount;
@property (nonatomic) int connectTimeout;
@property (retain, nonatomic) NSString *header;

- (void)dealloc;

@end
