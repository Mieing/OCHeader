@class NSData;

@interface BDQRCodeGeneratorConfig : NSObject

@property (copy, nonatomic) NSData *data;
@property (nonatomic) unsigned long long encoding;
@property (nonatomic) long long size;
@property (nonatomic) unsigned long long errorLevel;

- (id)initWithData:(id)a0 encoding:(unsigned long long)a1 size:(long long)a2 errorLevel:(unsigned long long)a3;
- (void).cxx_destruct;

@end
