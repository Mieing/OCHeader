@class NSString, HTSEventContext, IESLiveMessageFeaturedAreaAIView, HTSLiveImage, NSArray;
@protocol IESLiveRoomService;

@interface IESLiveMessageFeaturedAreaAIViewModel : NSObject

@property (nonatomic) long long role;
@property (copy, nonatomic) NSString *areaSchema;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) BOOL enableiPadDegrade;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (weak, nonatomic) IESLiveMessageFeaturedAreaAIView *view;
@property (retain, nonatomic) HTSLiveImage *avatar;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *tipText;
@property (copy, nonatomic) NSArray *abilityModels;

- (id)initWithDIContext:(id)a0;
- (void)didClickedContainerWithTrack:(BOOL)a0;
- (void)didClickedActionButton;
- (void)resetItemTrackState;
- (void)didSelectedAbilityItem:(id)a0;
- (void)didItemDisplayOnce:(id)a0;
- (void)trackClickWithParams:(id)a0;
- (id)getShowTypeString;
- (void)trackRequestResultWithParams:(id)a0;
- (void)updateWithContainerConfig:(id)a0;
- (void).cxx_destruct;

@end
