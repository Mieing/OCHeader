@class NSString, NSMutableArray, FavPhotoInfo;

@interface FavSecurityRequest : WXPBGeneratedMessage

@property (nonatomic) int opType;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSMutableArray *photoMd5List;
@property (retain, nonatomic) FavPhotoInfo *bigPhotoMd5;

+ (void)initialize;

@end
