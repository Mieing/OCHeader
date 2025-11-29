@class NSArray, FinderJumpInfo;

@interface MMFinderLivePaidConnectMicAnchorOperationPanelInfo : NSObject

@property (nonatomic) unsigned long long serviceCount;
@property (retain, nonatomic) FinderJumpInfo *historyJumpInfo;
@property (retain, nonatomic) FinderJumpInfo *ratingJumpInfo;
@property (nonatomic) double serviceRating;
@property (retain, nonatomic) NSArray *connectedUserList;
@property (retain, nonatomic) NSArray *applyingUserList;

+ (id)fromPurchaseMicInfoResp:(id)a0 allMicUsersList:(id)a1;

- (void).cxx_destruct;

@end
