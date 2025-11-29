@class NSMutableArray;

@interface SearchSyncClientCustomInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *liteappVersionList;
@property (retain, nonatomic) NSMutableArray *zhugePersonalMsgInfoList;

+ (void)initialize;

- (void)setZhugePersonalMsgInfoList:(id)a0;
- (id)zhugePersonalMsgInfoList;
- (void)setLiteappVersionList:(id)a0;
- (id)liteappVersionList;

@end
