@class NSDictionary, NSString;

@interface IESECBuyNowPreprocessorResult : NSObject <YataDataProcessorResult>

@property (copy, nonatomic) NSDictionary *appendCustom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)custom;

@end
