@class NSData;

@interface BDXBridgeLynxSignSuite : NSObject

@property (nonatomic) unsigned long long encryptionType;
@property (nonatomic) unsigned long long digestType;
@property (retain, nonatomic) NSData *signatureData;

- (void).cxx_destruct;

@end
