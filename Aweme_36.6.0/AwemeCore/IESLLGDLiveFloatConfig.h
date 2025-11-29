@class NSNumber, NSString, UIViewController;

@interface IESLLGDLiveFloatConfig : NSObject

@property (retain, nonatomic) NSNumber *needShow;
@property (retain, nonatomic) NSNumber *silentDisplay;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *jumpSchema;
@property (copy, nonatomic) NSString *enterFrom;
@property (weak, nonatomic) UIViewController *onViewController;
@property (copy, nonatomic) NSString *liveFloatTag;
@property (copy, nonatomic) id /* block */ defaultTapAction;

- (void).cxx_destruct;
- (id)initWithParams:(id)a0;

@end
