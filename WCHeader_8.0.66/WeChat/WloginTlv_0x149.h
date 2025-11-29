@class NSString;

@interface WloginTlv_0x149 : WloginTlv

@property unsigned short wTipsType;
@property (copy) NSString *sTipsTitle;
@property (copy) NSString *sTipsContent;
@property (copy) NSString *sOtherInfo;

- (int)decode:(char **)a0 andBuffLen:(int *)a1;
- (void)dealloc;

@end
