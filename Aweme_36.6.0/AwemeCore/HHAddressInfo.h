@class NSData, NSString;

@interface HHAddressInfo : NSObject

@property (retain, nonatomic) NSData *addressData;
@property (readonly, nonatomic) NSString *hostName;
@property (readonly, nonatomic) struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *address;
@property (readonly, nonatomic) unsigned short portNumber;
@property (readonly, nonatomic) NSString *addressAndPortString;
@property (readonly, nonatomic) long long interfaceIndex;
@property (readonly, nonatomic) NSString *interfaceName;
@property (readonly, nonatomic) NSData *txtData;

- (id)initWithHostName:(id)a0 portNumber:(unsigned short)a1 txtData:(id)a2 interfaceIndex:(long long)a3 interfaceName:(id)a4;
- (id)initWithHostName:(id)a0 addressData:(id)a1 txtData:(id)a2 interfaceIndex:(long long)a3 interfaceName:(id)a4;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
