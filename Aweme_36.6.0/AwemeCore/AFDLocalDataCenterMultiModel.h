@class NSString, NSMutableDictionary, NSSet;

@interface AFDLocalDataCenterMultiModel : NSObject

@property (retain, nonatomic) NSMutableDictionary *models;
@property (copy, nonatomic) NSString *primaryID;
@property (copy, nonatomic) NSSet *validTables;

- (id)allModels;
- (BOOL)isTableValid:(id)a0;
- (id)modelForTable:(id)a0;
- (void)setModel:(id)a0 forTable:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
