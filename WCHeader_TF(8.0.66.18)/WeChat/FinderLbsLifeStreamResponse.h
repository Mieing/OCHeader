@class FinderPreloadInfo, FinderStreamLayoutInfo, NSData, NSMutableArray, BaseResponse;

@interface FinderLbsLifeStreamResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *object;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) FinderPreloadInfo *preloadInfo;
@property (retain, nonatomic) NSMutableArray *tabList;
@property (retain, nonatomic) FinderStreamLayoutInfo *layoutInfo;
@property (nonatomic) unsigned long long defaultSelectedTabId;
@property (nonatomic) unsigned int prefetchRemainCount;
@property (nonatomic) unsigned int extFlag;

+ (void)initialize;

@end
