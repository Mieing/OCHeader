@class NSMutableArray;

@interface AffPicUrlsMsg : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *picInfoList;
@property (retain, nonatomic) NSMutableArray *picUrlV1;
@property (retain, nonatomic) NSMutableArray *picUrlV1Preload;

+ (void)initialize;

@end
