@interface BDXForestSSRBinaryHeader : BDXForestSSRParser

@property (nonatomic) unsigned int magicNumber;
@property (nonatomic) unsigned long long serverStatus;
@property (nonatomic) unsigned char frameCount;

- (void)parseMagicNumber:(id)a0 error:(id *)a1;
- (void)parseServerStatus:(id)a0 error:(id *)a1;
- (void)parseFrameCount:(id)a0 error:(id *)a1;
- (void)parse:(id)a0 error:(id *)a1;

@end
