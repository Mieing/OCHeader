@class NSString;

@interface WloginTlv_0x167 : WloginTlv

@property (copy) NSString *sImgUrl;
@property unsigned char cImgFormat;
@property unsigned char cImgType;

- (int)decode:(char **)a0 andBuffLen:(int *)a1;
- (void)dealloc;

@end
