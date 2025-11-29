@class NSString, NSDictionary;

@interface IESLiveRevenueInteractLynxInteractModel : IESLiveRevenueInteractLynxModel

@property (nonatomic) BOOL isMatching;
@property (nonatomic) long long inviteType;
@property (nonatomic) long long matchType;
@property (nonatomic) long long interactStartTime;
@property (copy, nonatomic) NSString *linkAnchorInfo;
@property (copy, nonatomic) NSString *seiData;
@property (copy, nonatomic) NSString *screenData;
@property (copy, nonatomic) NSString *linkmicScore;
@property (nonatomic) long long linkRecordTime;
@property (nonatomic) long long needLastResult;
@property (copy, nonatomic) NSString *doubleMuteStatus;
@property (copy, nonatomic) NSString *intercomData;
@property (nonatomic) long long gameStatus;
@property (copy, nonatomic) NSDictionary *gameExtra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerFrame;

@end
