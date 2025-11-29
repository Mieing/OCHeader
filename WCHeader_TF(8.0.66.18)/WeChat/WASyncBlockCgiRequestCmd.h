@class NSMutableArray;

@interface WASyncBlockCgiRequestCmd : WASyncBaseCmd

@property (retain, nonatomic) NSMutableArray *blockCgis;
@property (retain, nonatomic) NSMutableArray *sceneLists;
@property (nonatomic) unsigned int blockBeginTime;
@property (nonatomic) unsigned int blockEndTime;

- (id)description;
- (void).cxx_destruct;

@end
