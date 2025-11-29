@class FinderJoinLiveTips, FinderBizUserInfo;

@interface FinderLivePreJoinLiveInfo : WXPBGeneratedMessage

@property (retain, nonatomic) FinderJoinLiveTips *tips;
@property (retain, nonatomic) FinderBizUserInfo *bizUserInfo;

+ (void)initialize;

- (void)setBizUserInfo:(id)a0;
- (id)bizUserInfo;
- (void)setTips:(id)a0;
- (id)tips;

@end
