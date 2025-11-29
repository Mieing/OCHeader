@class NSString;

@interface IESECLogger : NSObject <IESECLogger>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)logWithLevel:(unsigned long long)a0 tag:(id)a1 fileName:(const char *)a2 functionName:(const char *)a3 line:(int)a4 message:(const char *)a5;
- (void)logWithLevel:(unsigned long long)a0 tag:(id)a1 fileName:(const char *)a2 functionName:(const char *)a3 line:(int)a4 eventName:(id)a5 extra:(id)a6;

@end
