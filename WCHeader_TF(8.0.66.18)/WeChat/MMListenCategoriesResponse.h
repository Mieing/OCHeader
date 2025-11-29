@class MMListenAudioBaseResponse, MMListenCategoryItem, NSMutableArray, BaseResponse;

@interface MMListenCategoriesResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *items;
@property (nonatomic) int wheelPointer;
@property (nonatomic) int categoryOffset;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) MMListenAudioBaseResponse *audioBaseResponse;
@property (retain, nonatomic) MMListenCategoryItem *myLikeHistory;
@property (retain, nonatomic) MMListenCategoryItem *myListenHistory;
@property (retain, nonatomic) MMListenCategoryItem *myAlbums;

+ (void)initialize;

@end
