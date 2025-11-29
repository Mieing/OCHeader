@class NSArray, NSString, NSDictionary, UIView;

@interface IESECUIVerifyConfig : NSObject

@property (weak, nonatomic) UIView *targetView;
@property (copy, nonatomic) NSArray *rules;
@property (copy, nonatomic) NSString *btmID;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end
