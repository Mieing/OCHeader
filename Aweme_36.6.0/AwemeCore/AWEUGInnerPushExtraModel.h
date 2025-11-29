@class NSString, NSArray, NSDictionary;

@interface AWEUGInnerPushExtraModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL needImage;
@property (copy, nonatomic) NSString *mainTitle;
@property (copy, nonatomic) NSString *mainContent;
@property (copy, nonatomic) NSString *mainImageURL;
@property (copy, nonatomic) NSString *negativeBtnText;
@property (copy, nonatomic) NSString *positiveBtnText;
@property (copy, nonatomic) NSString *selectionTitle;
@property (retain, nonatomic) NSArray *selections;
@property (nonatomic) long long layoutType;
@property (copy, nonatomic) NSString *showReason;
@property (retain, nonatomic) NSDictionary *unselectedGuideVideo;
@property (retain, nonatomic) NSDictionary *selectedGuideVideo;
@property (retain, nonatomic) NSDictionary *incentiveGuideInfo;
@property (retain, nonatomic) NSArray *dynamicUIInfo;
@property (copy, nonatomic) NSString *positiveToast;
@property (copy, nonatomic) NSString *negativeToast;
@property (copy, nonatomic) NSString *viewStyle;
@property (copy, nonatomic) NSDictionary *pushAction;
@property (copy, nonatomic) AWEUGInnerPushExtraModel *subscriptionModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)selectionsArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
