@class NSString;

@interface RTVFeedShareReminderContentViewModel : NSObject

@property (readonly, nonatomic) long long resourceType;
@property (readonly, copy, nonatomic) NSString *resourceURI;
@property (readonly, copy, nonatomic) NSString *tips;

- (id)initWithResourceType:(long long)a0 uri:(id)a1 tips:(id)a2;
- (void).cxx_destruct;

@end
