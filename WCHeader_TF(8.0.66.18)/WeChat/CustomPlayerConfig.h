@class NSString;

@interface CustomPlayerConfig : NSObject

@property (nonatomic) BOOL isHDRLive;
@property (nonatomic) unsigned int customRenderVal;
@property (retain, nonatomic) NSString *backDomain;
@property (nonatomic) unsigned int flvGopCache;
@property (nonatomic) BOOL isFlvIpv6First;

- (void).cxx_destruct;

@end
