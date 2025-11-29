@class NSString;
@protocol CJPayLoadingManagerProtocol;

@interface CJPayBaseLoadingItem : NSObject <CJPayAdvanceLoadingProtocol>

@property (copy, nonatomic) NSString *loadingIdentifer;
@property (nonatomic) double timeoutInSec;
@property (weak, nonatomic) id<CJPayLoadingManagerProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)loadingType;

- (void)addLoadingCount;
- (void)resetLoadingCount;
- (void).cxx_destruct;

@end
