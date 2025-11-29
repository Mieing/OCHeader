@class NSString, AWELandscapeLayerListModel;

@interface AWELandscapeLayerResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWELandscapeLayerListModel *forwardListModel;
@property (retain, nonatomic) AWELandscapeLayerListModel *reverseListModel;
@property (copy, nonatomic) NSString *userStatus;

+ (id)forwardListModelJSONTransformer;
+ (id)reverseListModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
