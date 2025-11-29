@class NSString, NSDictionary;

@interface ACCJsEvent : NSObject

@property (copy, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSDictionary *params;

- (void).cxx_destruct;

@end
