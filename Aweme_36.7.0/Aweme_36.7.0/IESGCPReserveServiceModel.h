@class NSString, NSDictionary, UIView, NSNumber;

@interface IESGCPReserveServiceModel : NSObject

@property (copy, nonatomic) NSNumber *roomID;
@property (copy, nonatomic) NSString *gameID;
@property (copy, nonatomic) NSString *gameName;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *anchorID;
@property (retain, nonatomic) UIView *loadingContainer;
@property (nonatomic) BOOL isBenefit;
@property (nonatomic) long long benefitCount;
@property (copy, nonatomic) NSString *videoID;
@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) NSString *subScene;
@property (copy, nonatomic) NSString *promoterID;
@property (nonatomic) BOOL isFullScreen;
@property (copy, nonatomic) NSString *currentTabID;
@property (retain, nonatomic) NSDictionary *trackExtra;
@property (copy, nonatomic) NSString *userNickName;
@property (copy, nonatomic) NSString *trafficSource;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL isAd;
@property (copy, nonatomic) NSString *adID;
@property (copy, nonatomic) NSString *creativeID;
@property (copy, nonatomic) NSString *adLogExtra;
@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSString *promoteInstanceID;
@property (copy, nonatomic) NSString *isOtherChannel;
@property (nonatomic) BOOL forbidReserveAlert;
@property (nonatomic) BOOL forbidReserveErrorToast;
@property (nonatomic) long long sourceType;
@property (nonatomic) long long stockType;
@property (nonatomic) long long originalSystemOrigin;
@property (nonatomic) BOOL ifDou;
@property (nonatomic) long long isRsvp;
@property (nonatomic) long long interactiveStyle;
@property (nonatomic) BOOL reserveState;

- (void).cxx_destruct;

@end
