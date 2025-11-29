@class NSString;

@interface PNSLoggerImpl : NSObject <PNSLoggerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setLogWithFileName:(id)a0 funcName:(id)a1 tag:(id)a2 line:(int)a3 level:(unsigned long long)a4 format:(id)a5;


@end
