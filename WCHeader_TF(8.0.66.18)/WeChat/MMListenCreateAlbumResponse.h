@class NSString, MMListenCategoryItem, BaseResponse;

@interface MMListenCreateAlbumResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *categoryId;
@property (retain, nonatomic) NSString *listenId;
@property (retain, nonatomic) MMListenCategoryItem *categoryItem;

+ (void)initialize;

@end
