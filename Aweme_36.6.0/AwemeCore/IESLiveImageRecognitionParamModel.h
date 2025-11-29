@class NSString, NSNumber;

@interface IESLiveImageRecognitionParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *entry;
@property (retain, nonatomic) NSNumber *scene;
@property (copy, nonatomic) NSString *btmToken;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
