@class NSString, NSNumber;

@interface IESECLiveEcPostActionParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *action;
@property (retain, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSString *pageId;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
