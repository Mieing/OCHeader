@class NSString;

@interface BUADServiceZip : NSObject <BUADServiceUnzipProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cloneInstance:(id /* block */)a0;
- (id)adServiceVersion;
- (void)unzipFileAtPath:(id)a0 toDestination:(id)a1 callback:(id /* block */)a2;
- (BOOL)unzipFileAtPath:(id)a0 toDestination:(id)a1 overwrite:(BOOL)a2 needRename:(BOOL)a3 password:(id)a4 error:(id *)a5;
- (void)unzipFileAtPath:(id)a0 toDestination:(id)a1 overwrite:(BOOL)a2 needRename:(BOOL)a3 password:(id)a4 callback:(id /* block */)a5;
- (BOOL)unzipFileAtPath:(id)a0 toDestination:(id)a1 error:(id *)a2;

@end
