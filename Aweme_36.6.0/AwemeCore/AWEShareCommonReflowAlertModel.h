@class NSString, UIImage, NSDictionary;

@interface AWEShareCommonReflowAlertModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *descTitle;
@property (copy, nonatomic) NSString *openBtnText;
@property (retain, nonatomic) UIImage *headImage;
@property (copy, nonatomic) id /* block */ openAction;
@property (copy, nonatomic) id /* block */ cancelAction;
@property (copy, nonatomic) id /* block */ reportAction;
@property (copy, nonatomic) NSDictionary *trackParams;

- (void).cxx_destruct;

@end
