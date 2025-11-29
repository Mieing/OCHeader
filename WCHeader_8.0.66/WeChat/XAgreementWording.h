@class NSMutableArray;

@interface XAgreementWording : WXPBGeneratedMessage

@property (nonatomic) int xagreementId;
@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSMutableArray *langWordings;

+ (void)initialize;

@end
