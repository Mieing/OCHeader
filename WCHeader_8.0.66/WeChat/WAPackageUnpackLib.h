@class NSString;

@interface WAPackageUnpackLib : NSObject

@property (nonatomic) void *unpackLib;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) unsigned long long debugModeType;
@property (nonatomic) unsigned long long version;

- (id)initWithAppId:(id)a0 version:(unsigned long long)a1 isDebugMode:(unsigned long long)a2;
- (id)getFileContent:(id)a0 error:(id *)a1;
- (void)dealloc;
- (void).cxx_destruct;

@end
