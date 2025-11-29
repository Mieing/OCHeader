@class NSString, NSArray;

@interface BDPCPPreloadConfig : NSObject

@property (retain, nonatomic) NSString *network;
@property (retain, nonatomic) NSArray *packages;

+ (void)bootstrapLaunch;

- (void).cxx_destruct;

@end
