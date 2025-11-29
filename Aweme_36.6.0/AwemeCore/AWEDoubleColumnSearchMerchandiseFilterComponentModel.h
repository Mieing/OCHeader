@class AWEDoubleColumnSearchMerchandiseFilterComponentTrackModel, NSString, NSArray, NSAttributedString, AWEDoubleColumnSearchMerchandiseClickToastInfo, AWEDoubleColumnSearchMerchandiseFilterComponentAnimationConfigModel, NSNumber, AWEDoubleColumnSearchMerchandiseFilterStyleModel;

@interface AWEDoubleColumnSearchMerchandiseFilterComponentModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *componentID;
@property (copy, nonatomic) NSString *dataID;
@property (copy, nonatomic) NSString *styleID;
@property (nonatomic) long long pinTop;
@property (nonatomic) long long customOrder;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *headText;
@property (copy, nonatomic) NSString *selectedHeadText;
@property (copy, nonatomic) NSString *tailText;
@property (copy, nonatomic) NSString *displayText;
@property (copy, nonatomic) NSString *postscriptText;
@property (copy, nonatomic) NSString *englishText;
@property (copy, nonatomic) NSString *subRowText;
@property (copy, nonatomic) NSString *leftText;
@property (copy, nonatomic) NSString *leftPostscriptText;
@property (copy, nonatomic) NSString *rightText;
@property (copy, nonatomic) NSString *rightPostscriptText;
@property (copy, nonatomic) NSString *endTimeTailText;
@property (copy, nonatomic) AWEDoubleColumnSearchMerchandiseClickToastInfo *clickToastInfo;
@property (retain, nonatomic) NSNumber *needMutex;
@property (nonatomic) BOOL isDefaultSelect;
@property (copy, nonatomic) NSString *componentType;
@property (copy, nonatomic) NSString *textType;
@property (nonatomic) BOOL counterEnabled;
@property (nonatomic) BOOL disableCounter;
@property (nonatomic) BOOL disableSelected;
@property (nonatomic) BOOL gradualChangeEnabled;
@property (nonatomic) unsigned long long fixedPosition;
@property (copy, nonatomic) NSString *tabType;
@property (copy, nonatomic) NSString *counterTabType;
@property (nonatomic) double height;
@property (nonatomic) double width;
@property (retain, nonatomic) NSNumber *paddingLeft;
@property (retain, nonatomic) NSNumber *paddingRight;
@property (retain, nonatomic) NSNumber *paddingTop;
@property (retain, nonatomic) NSNumber *paddingBottom;
@property (nonatomic) BOOL newStyleWithTab;
@property (nonatomic) long long columnCount;
@property (nonatomic) long long defaultShowCount;
@property (copy, nonatomic) NSString *selectedParentText;
@property (nonatomic) BOOL isFilterBoardNewStyle;
@property (nonatomic) BOOL showSidebar;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterStyleModel *styleInfo;
@property (copy, nonatomic) NSArray *childrenComponent;
@property (nonatomic) double subboardWidth;
@property (weak, nonatomic) AWEDoubleColumnSearchMerchandiseFilterComponentModel *parentComponent;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterComponentTrackModel *trackModel;
@property (nonatomic) double maxTitleWidth;
@property (nonatomic) unsigned long long priceSortType;
@property (nonatomic) long long itemRow;
@property (nonatomic) BOOL allowGradualChangeAnimation;
@property (copy, nonatomic) NSAttributedString *attributedDisplayString;
@property (copy, nonatomic) NSString *endTime;
@property (copy, nonatomic) NSString *expiredTime;
@property (copy, nonatomic) NSString *invalidText;
@property (copy, nonatomic) NSString *validText;
@property (nonatomic) BOOL useTextWhenDefaultSelect;
@property (copy, nonatomic) NSString *groupId;
@property (nonatomic) BOOL isTrendingTracked;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterComponentAnimationConfigModel *animationConfig;

+ (id)childrenComponentJSONTransformer;
+ (id)animationConfigJSONTransformer;
+ (id)propertyKeys;
+ (id)JSONKeyPathsByPropertyKey;
+ (Class)classForParsingJSONDictionary:(id)a0;

- (long long)getIndexOfParent;
- (BOOL)isPriceSortComponent;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
