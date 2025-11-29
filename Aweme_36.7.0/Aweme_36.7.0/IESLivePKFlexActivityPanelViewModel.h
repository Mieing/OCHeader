@class IESLiveFixedFontTextSizeCache, NSString, IESLivePKInviteeListItemSection, NSMutableArray;
@protocol IESLivePKAnchorBuilderAction;

@interface IESLivePKFlexActivityPanelViewModel : NSObject

@property (retain, nonatomic) NSMutableArray *areasArray;
@property (retain, nonatomic) IESLivePKInviteeListItemSection *inviteeSection;
@property (copy, nonatomic) NSString *eventTrackingInfo;
@property (nonatomic) int inviteType;
@property (retain, nonatomic) IESLiveFixedFontTextSizeCache *nameSizeCache;
@property (retain, nonatomic) IESLiveFixedFontTextSizeCache *userTagSizeCache;
@property (retain, nonatomic) IESLiveFixedFontTextSizeCache *roomTagSizeCache;
@property (retain, nonatomic) id<IESLivePKAnchorBuilderAction> anchorBuilderAction;
@property (nonatomic) unsigned long long flexActivityID;
@property (copy, nonatomic) NSString *activityId;

- (void)setupItem:(id)a0 listType:(unsigned long long)a1 battleRival:(id)a2 requestID:(id)a3 listNum:(long long)a4;
- (id)buildTrackInfoWithItem:(id)a0;
- (void)updateViewModelWithAreasInfo:(id)a0 inviteType:(int)a1 eventTrackingInfo:(id)a2;
- (id)anchorStatusFromItem:(id)a0;
- (void)performRecommendAreaAction:(long long)a0;
- (void).cxx_destruct;

@end
