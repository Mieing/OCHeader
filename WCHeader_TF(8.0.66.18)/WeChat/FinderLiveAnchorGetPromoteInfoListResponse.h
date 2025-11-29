@class FinderJumpInfo, NSMutableArray, BaseResponse;

@interface FinderLiveAnchorGetPromoteInfoListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *promoteInfoList;
@property (retain, nonatomic) NSMutableArray *availableItems;
@property (nonatomic) unsigned int promotionValidTime;
@property (retain, nonatomic) FinderJumpInfo *promotionJumpInfo;

+ (void)initialize;

@end
