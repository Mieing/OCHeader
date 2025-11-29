@class NSString;

@interface IESECMarketingCommonBridgeBaseHandler : NSObject

@property (copy, nonatomic) NSString *action;
@property (nonatomic) BOOL needAddBtmToken;

- (void)callWithPage:(id)a0 rit:(id)a1 component:(id)a2 params:(id)a3 data:(id)a4 completion:(id /* block */)a5;
- (void).cxx_destruct;
- (id)init;

@end
