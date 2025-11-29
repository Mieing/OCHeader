@class NSString;

@interface IESIMFTSSetUpConfig : NSObject <IESIMFTSSetUpConfigProtocol>

@property (copy, nonatomic) NSString *uid;
@property (nonatomic) BOOL enableWCDBCrashOpt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
