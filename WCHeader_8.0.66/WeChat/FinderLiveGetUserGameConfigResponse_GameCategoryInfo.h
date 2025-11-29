@class NSString, NSMutableArray;

@interface FinderLiveGetUserGameConfigResponse_GameCategoryInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int categoryId;
@property (retain, nonatomic) NSString *categoryName;
@property (retain, nonatomic) NSMutableArray *gameAppInfoList;
@property (nonatomic) BOOL hasNext;
@property (retain, nonatomic) NSString *queryBuffer;

+ (void)initialize;

@end
