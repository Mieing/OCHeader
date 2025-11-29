@class NSString;
@protocol BDXBridgeAuthConfigDownload;

@interface BDXBridgeAuthConfigBuilder : NSObject

@property (retain, nonatomic) id<BDXBridgeAuthConfigDownload> download;
@property (copy, nonatomic) id /* block */ builtinAuthConfigBlock;
@property (nonatomic) long long delayUpdateAuthConfigWhenLaunch;
@property (copy, nonatomic) NSString *boeHostSuffix;

- (void).cxx_destruct;

@end
