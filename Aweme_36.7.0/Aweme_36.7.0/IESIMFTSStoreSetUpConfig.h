@class NSString;

@interface IESIMFTSStoreSetUpConfig : NSObject <IESIMFTSStoreSetUpConfigProtocol>

@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *uid;
@property (nonatomic) BOOL forbidDBRetry;
@property (nonatomic) BOOL traceError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
