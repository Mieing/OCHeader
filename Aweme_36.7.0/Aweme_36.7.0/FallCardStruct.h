@class NSString, FallCardCoverBgColorV2, HighValueAreaV2, FallLabelStruct;

@interface FallCardStruct : GPBMessage

@property (copy, nonatomic) NSString *recommendReason;
@property (nonatomic) BOOL hasRecommendReason;
@property (retain, nonatomic) HighValueAreaV2 *highValueArea;
@property (nonatomic) BOOL hasHighValueArea;
@property (retain, nonatomic) FallCardCoverBgColorV2 *coverBgColor;
@property (nonatomic) BOOL hasCoverBgColor;
@property (retain, nonatomic) FallLabelStruct *fallLabel;
@property (nonatomic) BOOL hasFallLabel;
@property (copy, nonatomic) NSString *recommendReasonV2;
@property (nonatomic) BOOL hasRecommendReasonV2;
@property (nonatomic) BOOL canExtendPlay;
@property (nonatomic) BOOL hasCanExtendPlay;
@property (nonatomic) BOOL canSwitchToFall;
@property (nonatomic) BOOL hasCanSwitchToFall;
@property (nonatomic) BOOL isTidy;
@property (nonatomic) BOOL hasIsTidy;

+ (id)descriptor;

- (BOOL)canSwitchToFall;
- (BOOL)canExtendPlay;
- (id)recommendReasonV2;

@end
