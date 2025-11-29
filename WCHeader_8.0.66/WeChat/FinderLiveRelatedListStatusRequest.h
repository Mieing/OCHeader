@class RelatedListEnterInfo, BaseRequest, FinderLiveClientStatus, RelatedListBlockInfo, FinderBaseRequest, RelatedListExitInfo;

@interface FinderLiveRelatedListStatusRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) FinderLiveClientStatus *clientStatus;
@property (retain, nonatomic) RelatedListEnterInfo *enterInfo;
@property (retain, nonatomic) RelatedListExitInfo *exitInfo;
@property (retain, nonatomic) RelatedListBlockInfo *blockInfo;

+ (void)initialize;

@end
