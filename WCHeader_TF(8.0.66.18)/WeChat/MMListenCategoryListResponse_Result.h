@class NSString, MMListenCategoryItem, MMListenMusicChatRoomInfo;

@interface MMListenCategoryListResponse_Result : WXPBGeneratedMessage

@property (retain, nonatomic) MMListenCategoryItem *categoryItem;
@property (nonatomic) unsigned long long seq;
@property (retain, nonatomic) NSString *jumpListenId;
@property (nonatomic) int opType;
@property (retain, nonatomic) NSString *subTitle;
@property (retain, nonatomic) MMListenMusicChatRoomInfo *chatRoomInfo;
@property (retain, nonatomic) NSString *recommendDesc;

+ (void)initialize;

@end
