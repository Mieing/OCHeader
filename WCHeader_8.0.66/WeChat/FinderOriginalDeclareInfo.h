@class NSString, NSMutableArray;

@interface FinderOriginalDeclareInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) NSString *declareEncouragingWording;
@property (nonatomic) unsigned int isSatisfiedAuthCondition;

+ (void)initialize;

- (void)setIsSatisfiedAuthCondition:(unsigned int)a0;
- (unsigned int)isSatisfiedAuthCondition;
- (void)setDeclareEncouragingWording:(id)a0;
- (id)declareEncouragingWording;
- (void)setItems:(id)a0;
- (id)items;

@end
