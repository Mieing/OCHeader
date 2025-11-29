@class NSMutableArray;

@interface FinderLiveModLiveVisibilityRequest : WXPBGeneratedMessage

@property (nonatomic) unsigned int modType;
@property (retain, nonatomic) NSMutableArray *additionalVisibilityFileIdList;
@property (retain, nonatomic) NSMutableArray *additionalVisibleChatroomIdList;
@property (retain, nonatomic) NSMutableArray *additionalVisibleUsernameList;
@property (retain, nonatomic) NSMutableArray *additionalFreeOfChargeFileIdList;
@property (retain, nonatomic) NSMutableArray *additionalFreeOfChargeChatroomIdList;
@property (retain, nonatomic) NSMutableArray *additionalFreeOfChargeUsernameList;
@property (retain, nonatomic) NSMutableArray *additionalVisibilityFriendLabelList;
@property (retain, nonatomic) NSMutableArray *additionalFreeOfChargeFriendLabelList;

+ (void)initialize;

@end
