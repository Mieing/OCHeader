@class NSString, NSDictionary;

@interface BDPNativeLCPRenderParam : NSObject

@property (copy, nonatomic) NSString *component;
@property (copy, nonatomic) NSString *embedId;
@property (copy, nonatomic) NSString *viewType;
@property (nonatomic) double timestamp;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSDictionary *extra;

- (void).cxx_destruct;
- (id)toDictionary;

@end
