@class NSString, AWEIMFriendInfoDataModel, UIImage;
@protocol AFDMomentColorRingInfoProtocol, AWEIMFriendInfoDataModelProtocol, AFDSkylightStory25BubbleInfoProtocol;

@interface AWEIMOnlineContactAvatarViewModel : NSObject <AWEIMOnlineContactAvatarViewModelProtocol>

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long vmType;
@property (retain, nonatomic) AWEIMFriendInfoDataModel<AWEIMFriendInfoDataModelProtocol> *friendInfoModel;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) BOOL hasEverPressed;
@property (readonly, nonatomic) BOOL canShowRedDot;
@property (copy, nonatomic) NSString *pageIdentifier;
@property (retain, nonatomic) id<AFDMomentColorRingInfoProtocol> momentColorRingInfo;
@property (retain, nonatomic) id<AFDSkylightStory25BubbleInfoProtocol> bubbleInfo;
@property (copy, nonatomic) id /* block */ story25ColorRingParamsBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subtitleDictionary;
+ (id)viewModelWithIdentifier:(id)a0;

- (id)preferredSubtitle;
- (void)configMomentColorRingInfoWithDict:(id)a0;
- (void)configStory25BubbleInfoWithDict:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
