@class NSString;

@interface DIRSEventOptions : NSObject

@property (nonatomic) long long category;
@property (nonatomic) long long priority;
@property (copy, nonatomic) NSString *regionKey;
@property (nonatomic) long long privacyLevel;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
