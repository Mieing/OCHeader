@class NSString;

@interface AWEECLogger : HTSService <AWEECLogger>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)logWithLevel:(unsigned long long)a0 logTage:(id)a1 fileName:(const char *)a2 functionName:(const char *)a3 line:(int)a4 format:(id)a5;

@end
