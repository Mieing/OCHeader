@class NSString, NSDictionary, NSNumber;

@interface IESLiveSendPoiLogParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *btm;
@property (nonatomic) BOOL enterNewPage;
@property (nonatomic) BOOL addBtmChain;
@property (retain, nonatomic) NSNumber *chainLength;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
