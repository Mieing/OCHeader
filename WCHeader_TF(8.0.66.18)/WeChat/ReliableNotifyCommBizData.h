@class NSData;

@interface ReliableNotifyCommBizData : WXPBGeneratedMessage

@property (nonatomic) unsigned long long bits;
@property (retain, nonatomic) NSData *data;

+ (void)initialize;

- (void)setData:(id)a0;
- (id)data;
- (void)setBits:(unsigned long long)a0;
- (unsigned long long)bits;

@end
