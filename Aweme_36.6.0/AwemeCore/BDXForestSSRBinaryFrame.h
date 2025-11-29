@class NSData;

@interface BDXForestSSRBinaryFrame : BDXForestSSRParser

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned int length;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) unsigned long long loc;
@property (nonatomic) unsigned long long curLoc;

- (void)parseFrameType:(id)a0;
- (void)parseFrameLength:(id)a0;
- (void)parseFrameData:(id)a0;
- (id)initWithLoc:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)parse:(id)a0;

@end
