@class NSString, NSDictionary, IESLiveRivalExtraInfo;
@protocol IESLiveRoomService;

@interface IESLiveMediaLinkParticipationCellItem : IESLiveDynamicModel

@property (nonatomic) unsigned long long listType;
@property (nonatomic) BOOL isBarItem;
@property (copy, nonatomic) NSString *barTip;
@property (nonatomic) BOOL isActiveBarIitem;
@property (weak, nonatomic) IESLiveMediaLinkParticipationCellItem *nextBarItem;
@property (nonatomic) long long curDataSourceCount;
@property (copy, nonatomic) NSString *requestID;
@property (retain, nonatomic) id<IESLiveRoomService> anchorInfo;
@property (retain, nonatomic) IESLiveRivalExtraInfo *rivalExtraInfo;
@property (copy, nonatomic) NSDictionary *linkerExtraInfo;
@property (nonatomic) long long state;
@property (copy, nonatomic) id /* block */ operateAction;

- (BOOL)isPKOnGoing;
- (BOOL)isOhterLinking;
- (BOOL)isMultiPKOnGoing;
- (BOOL)isScreencastLinking;
- (BOOL)isInvitationAllowed;
- (void).cxx_destruct;
- (double)cellHeight;

@end
