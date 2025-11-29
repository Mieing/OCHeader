@class NSArray, NSDictionary;

@interface AEKExtraAETrackModelDiff : NSObject

@property (copy, nonatomic) NSArray *deletes;
@property (copy, nonatomic) NSArray *adds;
@property (copy, nonatomic) NSArray *updates;
@property (copy, nonatomic) NSDictionary *idToCellModelDic;
@property (copy, nonatomic) NSDictionary *idToSectionModelDic;
@property (copy, nonatomic) NSDictionary *idToSlotDic;

- (void)diff:(id)a0 nle:(id)a1;
- (BOOL)updateUITrackModel:(id)a0;
- (void)updateTrackModelCacheWith:(id)a0;
- (BOOL)clearUIEmptyTrack:(id)a0;
- (void)setupCacheWith:(id)a0 nle:(id)a1;
- (BOOL)checkAndInsertCellModel:(id)a0 withSectionModel:(id)a1;
- (void).cxx_destruct;
- (BOOL)hasAnyChange;

@end
