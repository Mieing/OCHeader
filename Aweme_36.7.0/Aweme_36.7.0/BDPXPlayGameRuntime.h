@class NSString;

@interface BDPXPlayGameRuntime : BDPRuntime <BDPObjectReusable, BDPRuntimePredefineProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *frontendSDKVersion;
@property long long predefineCount;
@property double predefineDuration;
@property (retain, nonatomic) NSString *predefineIdentifier;
@property (nonatomic) long long validFileCount;
@property (nonatomic) long long validFileSize;


@end
