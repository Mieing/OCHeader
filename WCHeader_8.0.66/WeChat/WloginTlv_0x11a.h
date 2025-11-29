@class NSString;

@interface WloginTlv_0x11a : WloginTlv

@property unsigned short wFaceId;
@property unsigned char cAge;
@property unsigned char cGender;
@property (copy) NSString *sNickName;

- (int)decode:(char **)a0 andBuffLen:(int *)a1;
- (void)dealloc;

@end
