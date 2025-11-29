@class NSString, MMListenCategoryItem, MMListenJumpInfo;

@interface MMListenLikeResponse_ToastInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *leftText;
@property (retain, nonatomic) NSString *rightText;
@property (retain, nonatomic) MMListenCategoryItem *item;
@property (retain, nonatomic) MMListenJumpInfo *jumpInfo;

+ (void)initialize;

@end
