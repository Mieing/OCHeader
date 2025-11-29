@class NSString, NSArray;

@interface AFDVisitorListUnAuthorizedViewConfigModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *openAuthButtonTitle;
@property (copy, nonatomic) NSString *closeAuthButtonTitle;
@property (copy, nonatomic) NSString *closeAuthToastTitle;
@property (copy, nonatomic) NSArray *hintWords;
@property (copy, nonatomic) id /* block */ reloadBlock;
@property (copy, nonatomic) id /* block */ backBlock;
@property (nonatomic) long long layoutStyle;

- (void).cxx_destruct;

@end
