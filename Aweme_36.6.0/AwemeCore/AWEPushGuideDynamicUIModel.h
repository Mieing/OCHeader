@class NSString, NSArray, AWEPushGuideDynamicUIBoxModel, NSDictionary, AWEPushGuideDynamicUIShadowModel;

@interface AWEPushGuideDynamicUIModel : NSObject

@property (copy, nonatomic) NSString *viewId;
@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) NSArray *radius;
@property (retain, nonatomic) NSArray *position;
@property (retain, nonatomic) NSArray *size;
@property (retain, nonatomic) AWEPushGuideDynamicUIShadowModel *shadow;
@property (nonatomic) long long priority;
@property (nonatomic) double alpha;
@property (retain, nonatomic) AWEPushGuideDynamicUIBoxModel *box;
@property (copy, nonatomic) NSArray *boxList;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSArray *center;
@property (nonatomic) double borderWidth;
@property (copy, nonatomic) NSString *borderColor;
@property (nonatomic) double dismissInterval;
@property (nonatomic) BOOL external;
@property (nonatomic) BOOL cancel;
@property (copy, nonatomic) NSString *selectedCheckboxImage;
@property (copy, nonatomic) NSString *unselectedCheckboxImage;
@property (retain, nonatomic) NSArray *checkboxSize;
@property (copy, nonatomic) NSDictionary *formula;
@property (retain, nonatomic) NSArray *selection;
@property (nonatomic) BOOL selected;
@property (retain, nonatomic) NSDictionary *actions;
@property (nonatomic) double textLeadding;
@property (nonatomic) double checkboxTrailling;
@property (nonatomic) BOOL disabled;
@property (copy, nonatomic) NSArray *gradientStartPoint;
@property (copy, nonatomic) NSArray *gradientEndPoint;
@property (copy, nonatomic) NSArray *gradientColors;

- (id)buildBoxModelWithBoxDic:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
