@class NSString;

@interface ILogHttpReporter : NSObject <NSURLConnectionDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)httpReport:(unsigned int)a0 withData:(id)a1;
+ (BOOL)isPureAscii:(id)a0;


@end
