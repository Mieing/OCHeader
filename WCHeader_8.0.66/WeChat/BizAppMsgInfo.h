@class NSMutableArray, BizAppMsgBaseInfo;

@interface BizAppMsgInfo : WXPBGeneratedMessage

@property (retain, nonatomic) BizAppMsgBaseInfo *baseInfo;
@property (retain, nonatomic) NSMutableArray *detailInfo;

+ (void)initialize;

- (void)setDetailInfo:(id)a0;
- (id)detailInfo;
- (void)setBaseInfo:(id)a0;
- (id)baseInfo;

@end
