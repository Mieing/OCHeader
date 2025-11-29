@class EcsAddressInfo;

@interface EcsGiverAddressInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int hasAddress;
@property (retain, nonatomic) EcsAddressInfo *giverAddress;

+ (void)initialize;

@end
