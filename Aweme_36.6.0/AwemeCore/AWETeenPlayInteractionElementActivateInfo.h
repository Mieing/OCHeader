@interface AWETeenPlayInteractionElementActivateInfo : NSObject

@property (nonatomic) unsigned long long type;

+ (id)activeInfo;
+ (id)delayUpdatedInfo;

- (BOOL)shouldProcessAppear;

@end
