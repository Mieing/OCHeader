@class NSString, NSDictionary;

@interface AppServiceCacheEventData : NSObject

@property (nonatomic) unsigned long long eventType;
@property (nonatomic) long long jsEvent;
@property (copy, nonatomic) NSString *jsStringEventName;
@property (retain, nonatomic) NSDictionary *dicParam;
@property (nonatomic) unsigned long long webviewID;

- (void).cxx_destruct;

@end
