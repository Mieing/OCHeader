@class NSString;

@interface WloginTlv : NSObject <WloginProtocolBuff>

@property unsigned short wTlvT;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTag:(unsigned short)a0;
- (int)decode:(char **)a0 andBuffLen:(int *)a1;
- (int)encode:(id)a0;
- (id)getTlvTagString;
- (id)copy;

@end
