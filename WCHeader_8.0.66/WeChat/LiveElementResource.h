@class NSString, NSMutableArray;

@interface LiveElementResource : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *id;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *thumbnailUrl;
@property (retain, nonatomic) NSString *thumbnailMd5;
@property (retain, nonatomic) NSMutableArray *media;
@property (retain, nonatomic) NSString *businessData;

+ (void)initialize;

@end
