@class NSMutableArray, BizProfileV2PagingInfo;

@interface BizMessageList : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *msg;
@property (retain, nonatomic) BizProfileV2PagingInfo *pagingInfo;
@property (retain, nonatomic) NSMutableArray *featuredList;
@property (nonatomic) unsigned int featuredUpdateTime;

+ (void)initialize;

@end
