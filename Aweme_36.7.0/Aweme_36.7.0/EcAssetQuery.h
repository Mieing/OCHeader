@class EcParams;

@interface EcAssetQuery : NSObject

@property (nonatomic) unsigned long long albumId;
@property (retain, nonatomic) EcParams *pageParams;

- (void).cxx_destruct;

@end
