@class AWELiteRedPacketLoginPageInfo;

@interface AWELiteRedPacketLoginOptimizeTaskModel : AWELiteBaseApiModel

@property (nonatomic) BOOL hasTask;
@property (nonatomic) long long componentStyle;
@property (retain, nonatomic) AWELiteRedPacketLoginPageInfo *loginPageInfoModel;
@property (nonatomic) long long retainAlertImageStyle;

+ (id)loginPageInfoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
