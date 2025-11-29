@class NSNumber, NSString;

@interface IESLiveOpenAnchorInputDialogParamModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *maxLength;
@property (copy, nonatomic) NSString *placeHolder;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
