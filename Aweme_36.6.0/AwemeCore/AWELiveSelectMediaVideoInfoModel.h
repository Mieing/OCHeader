@class NSNumber, NSString;

@interface AWELiveSelectMediaVideoInfoModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSString *coverData;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
