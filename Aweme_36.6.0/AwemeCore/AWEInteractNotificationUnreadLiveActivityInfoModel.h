@class NSString, NSNumber, IESIMURLModel;

@interface AWEInteractNotificationUnreadLiveActivityInfoModel : IESIMBaseApiModel

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textColor;
@property (retain, nonatomic) NSNumber *textSize;
@property (copy, nonatomic) NSString *backgrounColorString;
@property (retain, nonatomic) IESIMURLModel *liveImage;

+ (id)instanceWithJSONDictionary:(id)a0;
+ (id)liveImageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
