@class CommentRefProductInfo, NSMutableArray, CommentRefFeedInfo;

@interface CommentContentInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *emoticonInfos;
@property (retain, nonatomic) NSMutableArray *imageInfos;
@property (retain, nonatomic) NSMutableArray *videoInfos;
@property (retain, nonatomic) CommentRefFeedInfo *refFeedInfo;
@property (retain, nonatomic) CommentRefProductInfo *refProductInfo;
@property (retain, nonatomic) NSMutableArray *adscardInfos;

+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;
+ (void)initialize;

- (void)setAdscardInfos:(id)a0;
- (id)adscardInfos;
- (void)setRefProductInfo:(id)a0;
- (id)refProductInfo;
- (void)setRefFeedInfo:(id)a0;
- (id)refFeedInfo;
- (void)setVideoInfos:(id)a0;
- (id)videoInfos;
- (void)setImageInfos:(id)a0;
- (id)imageInfos;
- (void)setEmoticonInfos:(id)a0;
- (id)emoticonInfos;
- (id)archivedWCTValue;

@end
