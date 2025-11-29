@class NSMutableArray;

@interface PhoneNumListInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSMutableArray *phoneNumList;

+ (void)initialize;

- (void)setPhoneNumList:(id)a0;
- (id)phoneNumList;
- (void)setCount:(unsigned int)a0;
- (unsigned int)count;

@end
