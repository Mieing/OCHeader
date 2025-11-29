@interface WloginTlv_0x116 : WloginTlv {
    unsigned int adwAppidList[10];
}

@property (nonatomic) unsigned char cVer;
@property (nonatomic) unsigned int dwMiscBitmap;
@property (nonatomic) unsigned int dwGetAppSig;
@property (nonatomic) unsigned char cAppidNum;

- (void)setAdwAppidList:(unsigned int)a0 withIndex:(unsigned char)a1;
- (unsigned int)adwAppidWithIndex:(unsigned char)a0;
- (int)encode:(id)a0;

@end
