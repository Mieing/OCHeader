@class UIColor, NSString, NSDictionary, UIImage;

@interface AWEIMMessageTabNaviPlusButtonModel : NSObject

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *titleColor;
@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) long long priority;
@property (copy, nonatomic) NSString *actionName;
@property (copy, nonatomic) NSString *lightIconURL;
@property (copy, nonatomic) NSString *darkIconURL;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSDictionary *mobExt;
@property (copy, nonatomic) id /* block */ willShowBlock;

- (void).cxx_destruct;

@end
