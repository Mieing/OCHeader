@class NSString, NSData;

@interface ResolveResult : NSObject

@property (retain, nonatomic) NSString *hostName;
@property (nonatomic) unsigned short port;
@property (retain, nonatomic) NSData *txtData;
@property (nonatomic) unsigned int interfaceIndex;
@property (retain, nonatomic) NSString *interfaceName;

- (void).cxx_destruct;

@end
