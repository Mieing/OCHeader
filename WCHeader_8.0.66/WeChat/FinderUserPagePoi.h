@class NSMutableArray;

@interface FinderUserPagePoi : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *snsPoiDetail;

+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;
+ (void)initialize;

- (void)setSnsPoiDetail:(id)a0;
- (id)snsPoiDetail;
- (id)archivedWCTValue;

@end
