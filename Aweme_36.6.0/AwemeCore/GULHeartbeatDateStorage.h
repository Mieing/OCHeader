@class NSString, NSURL;

@interface GULHeartbeatDateStorage : NSObject <GULHeartbeatDateStorable>

@property (readonly, nonatomic) NSString *fileName;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)checkAndCreateDirectory:(id)a0;
- (id)directoryPathURL;
- (id)heartbeatDictionaryWithFileURL:(id)a0;
- (BOOL)writeDictionary:(id)a0 forWritingURL:(id)a1 error:(id *)a2;
- (id)heartbeatDateForTag:(id)a0;
- (BOOL)setHearbeatDate:(id)a0 forTag:(id)a1;
- (void).cxx_destruct;
- (id)initWithFileName:(id)a0;

@end
