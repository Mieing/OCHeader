@class NSString, BDPUniqueID;

@interface DPRuntimePredefine : NSObject <BDPRuntimeAppPredefineProtocol>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) unsigned long long predefineCountTotal;
@property (nonatomic) BOOL useGraph;
@property (nonatomic) BOOL reuseRuntime;
@property (copy, nonatomic) NSString *frontendSDKVersion;
@property long long predefineCount;
@property double predefineDuration;
@property (retain, nonatomic) NSString *predefineIdentifier;
@property (nonatomic) long long validFileCount;
@property (nonatomic) long long validFileSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)clearPredefineJSScript;
- (BOOL)enableRecycle;
- (void).cxx_destruct;

@end
