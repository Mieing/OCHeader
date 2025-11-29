@class IESLiveLinkMicAudienceFastMatchResponse_ResponseData, NSString, UIImage, NSAttributedString;

@interface IESLiveAudienceInteractFastMatchPopUpViewConfig : NSObject

@property (nonatomic) long long itemType;
@property (retain, nonatomic) UIImage *topLeftImage;
@property (retain, nonatomic) NSAttributedString *topAttributeTitle;
@property (copy, nonatomic) NSString *topRightTitle;
@property (nonatomic) unsigned long long matchStatus;
@property (retain, nonatomic) IESLiveLinkMicAudienceFastMatchResponse_ResponseData *linkMicMatchData;
@property (copy, nonatomic) NSString *secondaryTitle;
@property (copy, nonatomic) NSString *secondaryContent;
@property (copy, nonatomic) NSString *matchBtnTitle;
@property (nonatomic) BOOL isGuideStyle;
@property (nonatomic) BOOL enableCountdown;
@property (nonatomic) BOOL isWaiting;
@property (nonatomic) BOOL isAddPricePaidLinkmic;
@property (nonatomic) BOOL isAddPricePaidLinkmicOriginalValue;
@property (nonatomic) BOOL enableFastMatch;
@property (nonatomic) BOOL addPriceOpen;
@property (nonatomic) BOOL currentUserDidAddPrice;
@property (nonatomic) BOOL normalAddPriceQueueOpen;
@property (nonatomic) BOOL isBigPartyKtvLayout;
@property (nonatomic) BOOL fromShake;
@property (nonatomic) BOOL showWaitingList;

- (void).cxx_destruct;
- (id)init;

@end
