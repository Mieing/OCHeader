@class NSArray, AWELuckyCatPendantTaskConfig, NSString, AWELuckyCatBubbleInfo, AWELuckyCatPendantExtendedInfoModel;

@interface AWELuckyCatGlobalWidgetConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *availablePosList;
@property (nonatomic) long long leftTopMargin;
@property (nonatomic) long long leftBottomMargin;
@property (nonatomic) long long rightTopMargin;
@property (nonatomic) long long rightBottomMargin;
@property (nonatomic) BOOL enbaleSlideRight;
@property (nonatomic) long long widgetType;
@property (retain, nonatomic) AWELuckyCatBubbleInfo *bubbleInfo;
@property (retain, nonatomic) AWELuckyCatPendantTaskConfig *pendantTaskConfig;
@property (retain, nonatomic) AWELuckyCatPendantExtendedInfoModel *pendantExtendInfoModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pendantExtendInfoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
