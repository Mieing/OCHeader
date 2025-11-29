@class NSData, NSArray, NSDictionary;
@protocol BDPPkgFileDecryptionProtocol;

@interface BDPODRXHeaderInfo : NSObject <NSCoding>

@property (nonatomic) unsigned int customVersion;
@property (nonatomic) unsigned int version;
@property (copy, nonatomic) NSData *extInfo;
@property (copy, nonatomic) NSArray *fileIndexes;
@property (copy, nonatomic) NSDictionary *fileIndexesDic;
@property (nonatomic) long long totalSize;
@property (retain, nonatomic) id<BDPPkgFileDecryptionProtocol> pkgDecrypter;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)debugDescription;

@end
