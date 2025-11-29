@class NSString;

@interface HMDHTTPTrafficInfo : NSObject

@property (retain, nonatomic) NSString *absoluteURL;
@property (retain, nonatomic) NSString *clientType;
@property (retain, nonatomic) NSString *MIMEType;
@property (nonatomic) unsigned long long upStreamBytes;
@property (nonatomic) unsigned long long downStreamBytes;

- (void).cxx_destruct;

@end
