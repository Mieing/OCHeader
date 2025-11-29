@class NSString;

@interface WloginTlv_0x141 : WloginTlv

@property unsigned short wDataVer;
@property (copy) NSString *sOperator;
@property unsigned short wNetType;
@property unsigned short wResvLen;

- (int)encode:(id)a0;
- (void)dealloc;

@end
