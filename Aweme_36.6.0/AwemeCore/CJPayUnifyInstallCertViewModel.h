@class NSString;

@interface CJPayUnifyInstallCertViewModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *confirmBtnText;
@property (copy, nonatomic) NSString *cancelBtnText;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;

- (void).cxx_destruct;

@end
