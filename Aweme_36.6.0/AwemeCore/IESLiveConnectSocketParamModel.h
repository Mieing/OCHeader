@class NSString, NSDictionary, NSArray;

@interface IESLiveConnectSocketParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSDictionary *header;
@property (copy, nonatomic) NSArray *protocols;

@end
