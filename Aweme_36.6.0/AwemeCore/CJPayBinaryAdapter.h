@protocol CJPayHomeBizAdapterDelegate, CJPayManagerAdapterDelegate;

@interface CJPayBinaryAdapter : NSObject

@property (weak, nonatomic) id<CJPayManagerAdapterDelegate> managerDelegate;
@property (weak, nonatomic) id<CJPayHomeBizAdapterDelegate> confirmPresenterDelegate;

+ (id)shared;

- (void).cxx_destruct;

@end
