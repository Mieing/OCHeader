@class UIViewController, NSString, AWEHPPinTopComponentUIConfig, AWEHPPinTopComponentTask;
@protocol AWEHPPinTopComponentProtocol;

@interface AWEHPPinTopUIContext : NSObject

@property (copy, nonatomic) NSString *channelID;
@property (retain, nonatomic) AWEHPPinTopComponentTask *task;
@property (retain, nonatomic) id<AWEHPPinTopComponentProtocol> component;
@property (retain, nonatomic) AWEHPPinTopComponentUIConfig *componentConfig;
@property (copy, nonatomic) NSString *modifyObserverName;
@property (copy, nonatomic) id /* block */ showResult;
@property (copy, nonatomic) id /* block */ completion;
@property (weak, nonatomic) UIViewController *contentVC;

- (void).cxx_destruct;
- (BOOL)isValid;

@end
