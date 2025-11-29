@interface WloginTlv_0x107 : WloginTlv

@property (nonatomic) unsigned short wPicType;
@property (nonatomic) unsigned char cCapType;
@property (nonatomic) unsigned short wPicSize;
@property (nonatomic) unsigned char cPicRetType;

- (int)encode:(id)a0;

@end
