@class NSString, BTBaseBarItemView, MPChannelTopBarInfo;

@interface BTChannelBarItemViewModel : NSObject <BTBarItemViewModelProtocol>

@property (readonly, nonatomic) NSString *username;
@property (readonly, nonatomic) NSString *headImgUrl;
@property (readonly, nonatomic) NSString *dmHeadImgUrl;
@property (readonly, nonatomic) NSString *nickName;
@property (readonly, nonatomic) BOOL hasGreenDot;
@property (readonly, nonatomic) BOOL hasArrow;
@property (readonly, nonatomic) BOOL useDefaultIcon;
@property (nonatomic) BOOL hasLine;
@property (weak, nonatomic) BTBaseBarItemView *barItemView;
@property (retain, nonatomic) MPChannelTopBarInfo *channelInfo;
@property (readonly, nonatomic) BOOL showChannelGreenDot;
@property (readonly, nonatomic) NSString *informMsgCnt;
@property (readonly, nonatomic) BOOL showSmallIcon;
@property (readonly, nonatomic) NSString *smallIconUrl;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasNewFinderLiving;
@property (readonly, nonatomic) BOOL isBrandLiving;
@property (readonly, nonatomic) BOOL isFinder;
@property (readonly, nonatomic) BOOL isMember;
@property (readonly, nonatomic) BOOL hasNewMemberContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemViewClassName;

- (void).cxx_destruct;

@end
