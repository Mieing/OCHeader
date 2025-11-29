@class NSData, NSMutableArray;

@interface FinderLiveSyncPromoteInfoListResp : WXPBGeneratedMessage

@property (retain, nonatomic) NSData *syncContext;
@property (nonatomic) unsigned int needReplace;
@property (retain, nonatomic) NSMutableArray *promoteInfoList;

+ (void)initialize;

@end
