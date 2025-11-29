@class NSString, NSArray, NSURL, NSDictionary, BDLynxBridge, BDLynxModuleData;

@interface BDLynxViewBaseParams : NSObject

@property (copy, nonatomic) NSString *sourceUrl;
@property (copy, nonatomic) NSString *cdnUrl;
@property (copy, nonatomic) NSString *localUrl;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *bundle;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *cardID;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *containerID;
@property (copy, nonatomic) NSString *groupContext;
@property (retain, nonatomic) NSArray *extraJSPaths;
@property (nonatomic) BOOL enableCanvas;
@property (nonatomic) long long canvasOptimize;
@property (nonatomic) BOOL disableAutoExpose;
@property (nonatomic) BOOL enableGetPreHeight;
@property (nonatomic) long long dynamic;
@property (nonatomic) BOOL disableShare;
@property (nonatomic) BOOL disableTimeStamp;
@property (nonatomic) long long forceFallback;
@property (copy, nonatomic) NSURL *fallbackURL;
@property (retain, nonatomic) id initialProperties;
@property (retain, nonatomic) NSDictionary *globalProps;
@property (copy, nonatomic) NSString *reportBid;
@property (copy, nonatomic) NSString *reportPid;
@property (nonatomic) BOOL enableBDLynxModule;
@property (retain, nonatomic) BDLynxModuleData *bdlynxModuleData;
@property (nonatomic) double fontScale;
@property (retain, nonatomic) BDLynxBridge *bdLynxBridge;

- (void).cxx_destruct;
- (id)init;

@end
