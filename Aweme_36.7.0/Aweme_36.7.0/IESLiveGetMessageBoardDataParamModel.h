@class NSArray, NSString;

@interface IESLiveGetMessageBoardDataParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSArray *keys;
@property (copy, nonatomic) NSString *requestFrom;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
