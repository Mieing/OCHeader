@class NSString;

@interface PTYUnZip : NSObject <PTYUnZipProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)unzipFileAtPath:(id)a0 toDestination:(id)a1 withError:(id *)a2;
+ (void)setup:(id)a0;


@end
