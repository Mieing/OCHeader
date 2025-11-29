@class NSString;

@interface CJPayDyYAPProcessLoginConfigModel : NSObject

@property (copy, nonatomic) NSString *themeId;
@property (nonatomic) BOOL isShownHalfScreen;
@property (copy, nonatomic) NSString *loginDesc;
@property (copy, nonatomic) id /* block */ pushFullScreenLoginVCBlock;
@property (copy, nonatomic) NSString *loginStyle;
@property (copy, nonatomic) NSString *outTradeNo;

- (void)clearLoginConfigModel;
- (void).cxx_destruct;

@end
