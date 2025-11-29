@protocol AWETabMallVisibleDelegate;

@interface AWETabMallVisibleRegisterBox : NSObject

@property (weak, nonatomic) id<AWETabMallVisibleDelegate> delegate;

+ (id)boxWithModel:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
