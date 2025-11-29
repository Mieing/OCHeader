@class NSString;

@interface FinderFlowCardRecommendReason : WXPBGeneratedMessage <WCTColumnCoding>

@property (retain, nonatomic) NSString *recommendReason;
@property (nonatomic) unsigned int reasonShowStyle;
@property (retain, nonatomic) NSString *authorRecommendReason;

+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;
+ (void)initialize;

- (void)setAuthorRecommendReason:(id)a0;
- (id)authorRecommendReason;
- (void)setReasonShowStyle:(unsigned int)a0;
- (unsigned int)reasonShowStyle;
- (void)setRecommendReason:(id)a0;
- (id)recommendReason;
- (id)archivedWCTValue;

@end
