@class CSJNativeAd, NSArray, NSMutableArray;

@interface CSJDislike : NSObject

@property (retain, nonatomic) CSJNativeAd *nativeAd;
@property (copy, nonatomic) NSArray *filterWords;
@property (retain, nonatomic) NSMutableArray *AllFilterWords;

- (void)didSelectedFilterWordWithReason:(id)a0;
- (id)initWithNativeAd:(id)a0;
- (void).cxx_destruct;
- (BOOL)isMemberOfClass:(Class)a0;
- (BOOL)isKindOfClass:(Class)a0;

@end
