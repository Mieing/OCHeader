@class NSString, NSDictionary;

@interface AWESearchSubcribeAlertConfiguration : NSObject

@property (copy, nonatomic) NSString *tipsTitle;
@property (copy, nonatomic) NSString *tipsDesc;
@property (nonatomic) BOOL needInputPhone;
@property (copy, nonatomic) NSString *inputTitle;
@property (copy, nonatomic) NSString *inputDesc;
@property (copy, nonatomic) NSDictionary *logParams;
@property (copy, nonatomic) id /* block */ dismissBack;

- (void).cxx_destruct;

@end
