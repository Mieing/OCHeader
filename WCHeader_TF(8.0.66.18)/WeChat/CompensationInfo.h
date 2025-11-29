@class NSString;

@interface CompensationInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int compensationType;
@property (retain, nonatomic) NSString *compensationId;
@property (nonatomic) unsigned int compensationAmount;
@property (nonatomic) unsigned int compensationState;

+ (void)initialize;

@end
