@class MMListenItem, MMListenCategoryItem, BaseResponse;

@interface MMListenVoiceSearchResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int type;
@property (retain, nonatomic) MMListenItem *listenItem;
@property (retain, nonatomic) MMListenCategoryItem *categoryItem;

+ (void)initialize;

@end
