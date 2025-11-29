@class NSArray, NSData;

@interface TTClientCertificate : NSObject

@property (copy, nonatomic) NSArray *HostsList;
@property (retain, nonatomic) NSData *Certificate;
@property (retain, nonatomic) NSData *PrivateKey;
@property (nonatomic) void *AlgorithmPreferAddr;
@property (nonatomic) void *SignAddr;

- (void).cxx_destruct;

@end
