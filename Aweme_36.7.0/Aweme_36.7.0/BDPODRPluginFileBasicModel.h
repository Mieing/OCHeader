@class NSString;

@interface BDPODRPluginFileBasicModel : NSObject

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *odrCodesTag;
@property (retain, nonatomic) NSString *odrCodesMd5;
@property (nonatomic) long long odrLength;
@property (retain, nonatomic) NSString *odrVersion;

- (void).cxx_destruct;

@end
