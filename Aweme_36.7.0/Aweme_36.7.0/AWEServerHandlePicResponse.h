@class AWEServerHandlePicData;

@interface AWEServerHandlePicResponse : ACCBaseApiModel

@property (retain, nonatomic) AWEServerHandlePicData *data;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;

- (void).cxx_destruct;

@end
