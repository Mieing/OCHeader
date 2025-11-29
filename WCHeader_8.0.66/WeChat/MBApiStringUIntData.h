@class NSString;

@interface MBApiStringUIntData : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *stringData;
@property (nonatomic) unsigned long long uintData;

+ (void)initialize;

- (void)setUintData:(unsigned long long)a0;
- (unsigned long long)uintData;
- (void)setStringData:(id)a0;
- (id)stringData;

@end
