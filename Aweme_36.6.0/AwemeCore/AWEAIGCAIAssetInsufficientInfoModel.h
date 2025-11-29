@class NSString;

@interface AWEAIGCAIAssetInsufficientInfoModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *buttonText;

- (id)toErrMsgString;
- (void).cxx_destruct;

@end
