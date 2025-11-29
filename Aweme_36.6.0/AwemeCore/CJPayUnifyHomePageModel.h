@class CJPayUnifyCashierRenderModel, CJPayUnifyCommonPageModel;
@protocol CJPayUnifyPayProcessRequestProtocol;

@interface CJPayUnifyHomePageModel : NSObject

@property (retain, nonatomic) CJPayUnifyCashierRenderModel *unifyPayModel;
@property (retain, nonatomic) CJPayUnifyCommonPageModel *commonModel;
@property (retain, nonatomic) id<CJPayUnifyPayProcessRequestProtocol> requestAdapter;
@property (copy, nonatomic) id /* block */ buildRefreshCreateExtParams;
@property (copy, nonatomic) id /* block */ refreshCreateOrderBlock;

- (void).cxx_destruct;

@end
