@class NSString, NSDictionary, NSNumber, UIViewController;

@interface IESECMallChannelEnterModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long preIndex;
@property (copy, nonatomic) NSString *preTabID;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSDictionary *landingParams;
@property (copy, nonatomic) NSString *themeStyle;
@property (nonatomic) long long tabOrder;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *btm;
@property (weak, nonatomic) UIViewController *hostVc;
@property (nonatomic) BOOL isFirstEnter;
@property (copy, nonatomic) NSNumber *tabClickTime;
@property (copy, nonatomic) NSString *tMallFrameTime;
@property (nonatomic) long long totalTabCount;
@property (copy, nonatomic) NSDictionary *skinInfo;
@property (copy, nonatomic) NSDictionary *fullSkinInfo;
@property (copy, nonatomic) NSDictionary *tabExtraInfo;
@property (nonatomic) BOOL isBubbleShowing;
@property (retain, nonatomic) id lastBubbleMsg;
@property (nonatomic) BOOL isRedDotShowing;
@property (retain, nonatomic) id lastRedDotMsg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
