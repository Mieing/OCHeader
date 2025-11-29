@class NSString, NSDictionary;

@interface AWELiveAnchorStableModePushContent : NSObject

@property (nonatomic) long long pushType;
@property (retain, nonatomic) NSString *reason;
@property (retain, nonatomic) NSString *detail;
@property (retain, nonatomic) NSString *action;
@property (retain, nonatomic) NSDictionary *params;
@property (copy, nonatomic) id /* block */ clickAction;

- (void).cxx_destruct;

@end
