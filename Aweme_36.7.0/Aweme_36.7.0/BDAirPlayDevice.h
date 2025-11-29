@class NSString;

@interface BDAirPlayDevice : NSObject

@property (nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *ipAddress;

- (id)initWithSmartViewDevice:(long long)a0 contextId:(id)a1;
- (id)description;

@end
