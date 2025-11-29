@class NSString, NSMutableArray, FinderJumpInfo;

@interface FinderWindowProductInfo_ProductLittleTail : WXPBGeneratedMessage

@property (nonatomic) unsigned int littleTailType;
@property (retain, nonatomic) NSMutableArray *imgUrls;
@property (retain, nonatomic) NSString *descWording;
@property (retain, nonatomic) FinderJumpInfo *jumpInfo;
@property (retain, nonatomic) NSString *reportData;

+ (void)initialize;

@end
