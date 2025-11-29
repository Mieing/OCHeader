@class NSString;

@interface WloginTlv_String : WloginTlv

@property (copy) NSString *sString;

- (int)decode:(char **)a0 andBuffLen:(int *)a1;
- (int)encode:(id)a0;
- (void)dealloc;

@end
