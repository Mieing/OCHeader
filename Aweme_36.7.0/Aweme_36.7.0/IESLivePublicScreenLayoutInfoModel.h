@class NSString;

@interface IESLivePublicScreenLayoutInfoModel : NSObject

@property (nonatomic) unsigned long long dynamicType;
@property (nonatomic) BOOL otherBizHeightFollowChange;
@property (nonatomic) unsigned long long currentScene;
@property (nonatomic) double publicScreenBottomPadding;
@property (nonatomic) BOOL hitProtectHeight;
@property (nonatomic) double messageListCaculateHeight;
@property (nonatomic) double publicScreenHeight;
@property (nonatomic) double allElementsAvoidHeight;
@property (nonatomic) double publicScreenRealWidth;
@property (nonatomic) double publicScreenOutSetWidth;
@property (nonatomic) double publicScreenSetWidth;
@property (nonatomic) BOOL forceSmallGiftMoveDown;
@property (nonatomic) double topContainerHeight;
@property (nonatomic) double bottomContainerHeight;
@property (nonatomic) double outSideBottomContainerHeight;
@property (nonatomic) double messageListRealHeight;
@property (copy, nonatomic) NSString *heightChangeReason;
@property (nonatomic) double calculateErrorHeight;

- (void).cxx_destruct;

@end
