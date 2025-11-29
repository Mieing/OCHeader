@class NSString, NSMutableArray, IESLivePKUser;

@interface IESLivePKConnectingInfoViewConifg : NSObject

@property (nonatomic) BOOL useNewStyle;
@property (nonatomic) BOOL showGender;
@property (nonatomic) BOOL showRecommendReason;
@property (nonatomic) BOOL isActivityTheme;
@property (nonatomic) BOOL showRivalInfo;
@property (nonatomic) double containerLimitWidth;
@property (copy, nonatomic) NSString *trackSource;
@property (retain, nonatomic) IESLivePKUser *oppositeUser;
@property (retain, nonatomic) NSMutableArray *matchTagsArray;
@property (copy, nonatomic) NSString *battleReserveInfo;

- (void).cxx_destruct;
- (id)init;

@end
