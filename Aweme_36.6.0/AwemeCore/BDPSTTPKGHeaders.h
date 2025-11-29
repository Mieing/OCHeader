@class NSData;

@interface BDPSTTPKGHeaders : NSObject

@property (nonatomic) long long version;
@property (nonatomic) unsigned long long compressionType;
@property (nonatomic) BOOL isEncrypt;
@property (copy, nonatomic) NSData *MD5;

- (void).cxx_destruct;

@end
