@class NSString;

@interface AnnieEcShowFeelGoodParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *appKey;
@property (nonatomic) BOOL needLoading;
@property (copy, nonatomic) NSString *bgColor;
@property (copy, nonatomic) NSString *eventID;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
