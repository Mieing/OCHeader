@class NSString, NSDictionary;
@protocol IESIMConversationProtocol;

@interface AWEIMListFPSCheckerContext : NSObject

@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSString *teaEventName;
@property (retain, nonatomic) NSDictionary *extra;
@property (retain, nonatomic) id<IESIMConversationProtocol> con;

- (void).cxx_destruct;

@end
