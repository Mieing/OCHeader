@class NSArray, NSString, IESLiveRivalExtraInfo, NSMutableArray, HTSLiveRoom;

@interface IESLiveRevenueInteractInviteItem : NSObject

@property (retain, nonatomic) HTSLiveRoom *room;
@property (nonatomic) struct CGSize { double width; double height; } nameSize;
@property (retain, nonatomic) NSMutableArray *userTagsArray;
@property (copy, nonatomic) NSArray *userTagsContentSizeArray;
@property (copy, nonatomic) NSString *infoText;
@property (copy, nonatomic) NSString *linkText;
@property (nonatomic) long long linkStatus;
@property (nonatomic) long long buttonState;
@property (nonatomic) int rivalType;
@property (copy, nonatomic) NSString *signExtra;
@property (nonatomic) unsigned long long rivalScene;
@property (copy, nonatomic) NSArray *participants;
@property (nonatomic) BOOL isMultiInvite;
@property (copy, nonatomic) id /* block */ inviteAction;
@property (nonatomic) BOOL isRecommend;
@property (nonatomic) long long listNum;
@property (copy, nonatomic) NSString *suffixStr;
@property (retain, nonatomic) IESLiveRivalExtraInfo *extraInfo;

- (void).cxx_destruct;

@end
