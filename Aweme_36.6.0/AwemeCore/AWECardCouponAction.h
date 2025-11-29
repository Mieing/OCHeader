@class NSString;

@interface AWECardCouponAction : NSObject {
    NSString *_name;
    NSString *_detailInfo;
    id /* block */ _action;
}

- (id)initWithDisplayName:(id)a0 detailInfo:(id)a1 action:(id /* block */)a2;
- (id)detailInfoText;
- (void).cxx_destruct;
- (void)execute;
- (id)displayName;

@end
