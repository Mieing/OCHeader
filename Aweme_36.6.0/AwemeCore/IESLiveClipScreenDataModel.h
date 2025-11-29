@class NSString;

@interface IESLiveClipScreenDataModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *localUrl;
@property (nonatomic) long long status;

+ (id)modelCustomPropertyMapper;

@end
