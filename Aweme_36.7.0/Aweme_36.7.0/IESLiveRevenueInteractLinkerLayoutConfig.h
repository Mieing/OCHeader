@class NSNumber, NSString, IESLiveLinkMicSEIParserResult;

@interface IESLiveRevenueInteractLinkerLayoutConfig : NSObject

@property (retain, nonatomic) NSNumber *layoutKey;
@property (nonatomic) long long scene;
@property (nonatomic) long long uiLayout;
@property (nonatomic) long long userCount;
@property (nonatomic) long long guestType;
@property (retain, nonatomic) NSString *layoutTag;
@property (copy, nonatomic) NSString *deviceType;
@property (retain, nonatomic) IESLiveLinkMicSEIParserResult *seiResult;
@property (nonatomic) BOOL isPCVerticalRoom;
@property (nonatomic) BOOL hasAudioAnchor;
@property (nonatomic) BOOL inCloudCollaborate;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } playerContainerRect;

- (void).cxx_destruct;
- (id)init;

@end
