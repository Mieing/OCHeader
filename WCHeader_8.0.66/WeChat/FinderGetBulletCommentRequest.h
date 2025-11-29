@class BaseRequest, NSString, NSData, FinderBaseRequest, NSMutableArray;

@interface FinderGetBulletCommentRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long startTimestamp;
@property (retain, nonatomic) NSString *lastBuffer;
@property (nonatomic) unsigned long long selectedSource;
@property (retain, nonatomic) NSMutableArray *needCommentIds;
@property (retain, nonatomic) NSData *bypassBuffer;

+ (void)initialize;

@end
