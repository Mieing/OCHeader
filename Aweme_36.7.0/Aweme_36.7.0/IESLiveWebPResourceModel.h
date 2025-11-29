@class NSString;

@interface IESLiveWebPResourceModel : IESLiveDynamicModel

@property (copy, nonatomic) NSString *portraitUrlStr;
@property (copy, nonatomic) NSString *landscapeUrlStr;
@property (nonatomic) unsigned long long currentOrientation;

- (id)createDecoderWithOrientation:(unsigned long long)a0;
- (id)currentUrl;
- (void)_parseConfigFileWithDirectory:(id)a0;
- (id)initWithDirectory:(id)a0;

@end
