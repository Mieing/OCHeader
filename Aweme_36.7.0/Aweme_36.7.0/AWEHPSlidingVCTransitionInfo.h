@class NSDictionary;

@interface AWEHPSlidingVCTransitionInfo : NSObject

@property (nonatomic) long long type;
@property (nonatomic) BOOL isByTap;
@property (retain, nonatomic) NSDictionary *extraInfo;
@property (nonatomic) long long previousIndex;
@property (nonatomic) long long index;
@property (readonly, nonatomic) BOOL animated;

- (void).cxx_destruct;

@end
