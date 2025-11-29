@class NSMutableArray;

@interface ServiceAgreementInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int agreementCount;
@property (retain, nonatomic) NSMutableArray *agreementList;

+ (void)initialize;

- (void)setAgreementList:(id)a0;
- (id)agreementList;
- (void)setAgreementCount:(unsigned int)a0;
- (unsigned int)agreementCount;

@end
