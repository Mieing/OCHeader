@class NSString;

@interface IESIMSafeAssertService : HTSService <IESIMSafeAssertService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)safeAssertLogWithFileName:(const char *)a0 lineNumber:(int)a1 condition:(const char *)a2 level:(long long)a3 author:(id)a4 formatedLog:(id)a5;

@end
