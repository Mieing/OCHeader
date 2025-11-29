@class NSString;

@interface IESDPBDefinitionNodeProperty : NSObject

@property (nonatomic) long long tag;
@property (nonatomic) long long type;
@property (nonatomic) BOOL repeat;
@property (copy, nonatomic) NSString *fq;
@property (retain, nonatomic) IESDPBDefinitionNodeProperty *k;
@property (retain, nonatomic) IESDPBDefinitionNodeProperty *v;

- (void).cxx_destruct;

@end
