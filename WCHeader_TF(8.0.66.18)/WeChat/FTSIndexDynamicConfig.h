@interface FTSIndexDynamicConfig : NSObject

@property (nonatomic) BOOL enableFastIndexing;
@property (nonatomic) BOOL enableMemCacheSearch;
@property (nonatomic) unsigned int uiMsgFastIndexThd;
@property (nonatomic) unsigned int uiMsgFastIndexTh;

- (id)init;
- (id)description;

@end
