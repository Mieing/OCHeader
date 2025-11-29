@interface BDPStarkPkgLoadInfo : NSObject

@property (nonatomic) long long downloadStart;
@property (nonatomic) long long downloadEnd;
@property (nonatomic) long long unzipStart;
@property (nonatomic) long long unzipEnd;
@property (nonatomic) long long decompressBrStart;
@property (nonatomic) long long decompressBrEnd;

@end
