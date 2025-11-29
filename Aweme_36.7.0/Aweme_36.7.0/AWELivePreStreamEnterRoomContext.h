@class NSString, UIImage, AWELiveRoomLogModel, NSArray, NSDictionary, IESLiveInteractionLayout, AWELivePreStreamContext, NSNumber;
@protocol IESLivePlayerProtocol, AWELiveElementInfoDelegate;

@interface AWELivePreStreamEnterRoomContext : NSObject

@property (weak, nonatomic) id<AWELiveElementInfoDelegate> viewModel;
@property (weak, nonatomic) id<IESLivePlayerProtocol> player;
@property (weak, nonatomic) AWELivePreStreamContext *pageContext;
@property (readonly, nonatomic) AWELiveRoomLogModel *roomLogModel;
@property (retain, nonatomic) id pageParamas;
@property (retain, nonatomic) NSString *enterFromMerge;
@property (nonatomic) BOOL hasShowPreWatchFinishView;
@property (retain, nonatomic) NSDictionary *feedbackData;
@property (retain, nonatomic) NSDictionary *couponDict;
@property (copy, nonatomic) NSString *adCardClickMethod;
@property (retain, nonatomic) NSNumber *clickArea;
@property (retain, nonatomic) UIImage *defaultCoverImage;
@property (nonatomic) BOOL didStartFromHighlight;
@property (nonatomic) BOOL didSeekTime;
@property (nonatomic) double currentWatchTime;
@property (retain, nonatomic) id ktvContext;
@property (retain, nonatomic) IESLiveInteractionLayout *preStreamEnterRoomLayout;
@property (copy, nonatomic) NSArray *preStreamEnterRoomUserList;

+ (id)createEnterRoomConfigWithViewModel:(id)a0 player:(id)a1 pageContext:(id)a2;

- (void).cxx_destruct;
- (id)init;

@end
