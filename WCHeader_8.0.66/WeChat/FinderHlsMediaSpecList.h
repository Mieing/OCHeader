@class NSString, NSMutableArray;

@interface FinderHlsMediaSpecList : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *hlsList;
@property (retain, nonatomic) NSString *encryptKey;
@property (retain, nonatomic) NSString *encryptIv;

+ (void)initialize;

@end
