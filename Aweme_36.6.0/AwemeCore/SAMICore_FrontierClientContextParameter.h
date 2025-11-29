@class NSString;

@interface SAMICore_FrontierClientContextParameter : NSObject

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *header;
@property (nonatomic) int maxConcurrency;
@property (nonatomic) int appId;
@property (retain, nonatomic) NSString *did;
@property (retain, nonatomic) NSString *appVersion;
@property (nonatomic) int platform;

- (void)dealloc;

@end
