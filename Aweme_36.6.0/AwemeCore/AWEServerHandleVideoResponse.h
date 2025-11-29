@class AWEServerHandleVideoData;

@interface AWEServerHandleVideoResponse : ACCBaseApiModel

@property (retain, nonatomic) AWEServerHandleVideoData *data;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;

- (void).cxx_destruct;

@end
