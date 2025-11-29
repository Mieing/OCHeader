@class NSString, AWEURLModel;

@interface AWENearbyWidgetModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *widgetID;
@property (copy, nonatomic) NSString *jumpURL;
@property (retain, nonatomic) AWEURLModel *imgURL;
@property (retain, nonatomic) AWEURLModel *smallImgURL;
@property (copy, nonatomic) NSString *reportParams;
@property (copy, nonatomic) NSString *activityID;
@property (copy, nonatomic) NSString *widgetType;
@property (copy, nonatomic) NSString *trackParams;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)hasWidgetData;
- (void).cxx_destruct;

@end
