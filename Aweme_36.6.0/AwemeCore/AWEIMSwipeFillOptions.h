@interface AWEIMSwipeFillOptions : NSObject

@property (nonatomic) long long autoFulFillmentStyle;
@property (nonatomic) long long timing;

+ (id)automaticWithStyle:(long long)a0 timing:(long long)a1;
+ (id)manualWithTiming:(long long)a0;

@end
