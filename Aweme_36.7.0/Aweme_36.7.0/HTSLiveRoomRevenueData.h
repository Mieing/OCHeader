@class HTSLiveAnchorLinkmic, HTSLiveOpenGame;

@interface HTSLiveRoomRevenueData : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveOpenGame *openGame;
@property (nonatomic) BOOL hasOpenGame;
@property (retain, nonatomic) HTSLiveAnchorLinkmic *anchorLinkmic;
@property (nonatomic) BOOL hasAnchorLinkmic;

+ (id)descriptor;

- (id)anchorLinkmic;

@end
