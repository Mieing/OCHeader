@class NSString, NSArray;

@interface TMNetworkDownlinkEncryptionRequestInfo : NSObject

@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSArray *hosts;
@property (nonatomic) unsigned long long matchType;

- (void).cxx_destruct;

@end
