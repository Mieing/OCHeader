@class NSMutableArray, BizProfileV2PagingInfo;

@interface BizMessageList : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *msg;
@property (retain, nonatomic) BizProfileV2PagingInfo *pagingInfo;
@property (retain, nonatomic) NSMutableArray *featuredList;
@property (nonatomic) unsigned int featuredUpdateTime;

+ (void)initialize;

- (void)setFeaturedUpdateTime:(unsigned int)a0;
- (unsigned int)featuredUpdateTime;
- (void)setFeaturedList:(id)a0;
- (id)featuredList;
- (void)setPagingInfo:(id)a0;
- (id)pagingInfo;
- (void)setMsg:(id)a0;
- (id)msg;

@end
