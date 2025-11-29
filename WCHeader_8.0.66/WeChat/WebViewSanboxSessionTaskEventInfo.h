@class NSString;

@interface WebViewSanboxSessionTaskEventInfo : NSObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned long long eventTime;

- (id)descriptionWithStartTime:(unsigned long long)a0;
- (void).cxx_destruct;

@end
