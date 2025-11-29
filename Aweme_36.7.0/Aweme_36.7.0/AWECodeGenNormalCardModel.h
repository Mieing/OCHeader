@class NSString, AWENewsAISmartLoadTimeModel, AWECodeGenBusinessInfoModel, AWECodeGenRenderInfoModel;

@interface AWECodeGenNormalCardModel : AWEBaseDataModel

@property (nonatomic) double preLayoutHeight;
@property (nonatomic) BOOL isFirstUnSubscribeCard;
@property (retain, nonatomic) AWENewsAISmartLoadTimeModel *loadTimeModel;
@property (copy, nonatomic) NSString *modelID;
@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) AWECodeGenBusinessInfoModel *businessInfoModel;
@property (retain, nonatomic) AWECodeGenRenderInfoModel *renderInfoModel;
@property (copy, nonatomic) NSString *logExtra;
@property (nonatomic) long long timeStamp;
@property (copy, nonatomic) NSString *extra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
