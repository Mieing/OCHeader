@class NSString, NSDictionary;

@interface BDALokiJSEventModel : NSObject

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) id /* block */ callback;

- (void).cxx_destruct;

@end
