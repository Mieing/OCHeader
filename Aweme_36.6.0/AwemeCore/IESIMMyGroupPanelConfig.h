@class NSString;
@protocol AWEIMShareAndForwardToChatProtocol;

@interface IESIMMyGroupPanelConfig : NSObject

@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) id<AWEIMShareAndForwardToChatProtocol> shareImpl;
@property (copy, nonatomic) id /* block */ containerHeightUpdater;
@property (copy, nonatomic) id /* block */ dismissAction;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;

- (void).cxx_destruct;

@end
