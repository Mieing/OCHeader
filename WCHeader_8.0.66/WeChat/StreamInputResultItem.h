@class NSString, NSArray;

@interface StreamInputResultItem : MMObject

@property (copy, nonatomic) NSString *voiceId;
@property (nonatomic) unsigned long long m_uiCreateTime;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) unsigned int m_uiSequence;
@property (nonatomic) unsigned int m_uiEndFlag;
@property (copy, nonatomic) NSArray *keywordList;

- (BOOL)lessThanOrEqual:(id)a0;
- (void)getValueFrom:(id)a0;
- (void).cxx_destruct;

@end
