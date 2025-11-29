@class NSString, NSMutableArray;

@interface PoiReviewContent : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *user;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) unsigned int createTime;
@property (retain, nonatomic) NSMutableArray *photos;
@property (retain, nonatomic) NSString *userFace;
@property (nonatomic) int goodCount;
@property (nonatomic) int isHighQuality;

+ (void)initialize;

@end
