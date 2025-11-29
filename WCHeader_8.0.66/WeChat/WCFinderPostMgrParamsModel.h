@class UIViewController;
@protocol WCFinderPostMgrDelegate;

@interface WCFinderPostMgrParamsModel : NSObject

@property (nonatomic) int userPrepareScene;
@property (nonatomic) unsigned long long enterScene;
@property (nonatomic) unsigned long long createFromType;
@property (nonatomic) unsigned long long createScene;
@property (nonatomic) int commentScene;
@property (retain, nonatomic) UIViewController *currentVC;
@property (weak, nonatomic) id<WCFinderPostMgrDelegate> delegate;
@property (nonatomic) int profileEnterType;
@property (nonatomic) unsigned long long shareScene;
@property (nonatomic) unsigned long long publisherEnteryType;

- (id)init;
- (void).cxx_destruct;

@end
