@class NSString, NSData, NSMutableArray, FinderLocation;

@interface FinderGetPostRecommendTitleContext : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *session;
@property (retain, nonatomic) NSString *currentWording;
@property (retain, nonatomic) NSData *feedEmbedding;
@property (retain, nonatomic) NSMutableArray *feedLocation;
@property (retain, nonatomic) NSString *musicId;
@property (retain, nonatomic) NSString *templateId;
@property (retain, nonatomic) FinderLocation *userLocation;
@property (retain, nonatomic) NSData *snapshotImageData;
@property (retain, nonatomic) NSData *snapshotOcrData;
@property (retain, nonatomic) NSString *snapshotCdnUrl;

+ (void)initialize;

@end
