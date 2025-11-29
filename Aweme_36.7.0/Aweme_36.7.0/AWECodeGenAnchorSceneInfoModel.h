@class NSString, AWECodeGenAnchorTextInfoModel;

@interface AWECodeGenAnchorSceneInfoModel : AWEBaseDataModel

@property (nonatomic) long long sceneType;
@property (nonatomic) BOOL isShow;
@property (copy, nonatomic) NSString *tracerInfo;
@property (copy, nonatomic) NSString *extra;
@property (retain, nonatomic) AWECodeGenAnchorTextInfoModel *subDescModel;
@property (retain, nonatomic) AWECodeGenAnchorTextInfoModel *funcDescModel;
@property (copy, nonatomic) NSString *lightIconUrl;
@property (copy, nonatomic) NSString *darkIconUrl;
@property (retain, nonatomic) AWECodeGenAnchorTextInfoModel *suffixModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
