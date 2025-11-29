@interface WloginTlv_0x150 : WloginTlv

@property unsigned int dwBitmap;
@property char cNet;

- (int)decode:(char **)a0 andBuffLen:(int *)a1;
- (void)dealloc;

@end
