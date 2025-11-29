@class NSString, NSArray;

@interface AWEIMShowInnerPushContext : NSObject <AWEIMShowInnerPushContextProtocol>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *titlePrefix;
@property (copy, nonatomic) NSString *titleSuffix;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSArray *imageURLList;
@property (copy, nonatomic) id /* block */ tapBlock;
@property (copy, nonatomic) id /* block */ swipeDismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
