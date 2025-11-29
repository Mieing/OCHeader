@class NSString;
@protocol AWEYAPAPIDelegateProtocol, AWEPayCJPayAPIWrapperProtocol;

@interface AWEPayCJPayAPIRequestWrapper : NSObject <CJPayAPIDelegate>

@property (copy, nonatomic) NSString *identify;
@property (retain, nonatomic) id<AWEYAPAPIDelegateProtocol> originalDelegate;
@property (weak, nonatomic) id<AWEPayCJPayAPIWrapperProtocol> wrapperProtocol;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)wrapperWithID:(id)a0 apiDelegate:(id)a1;

- (void)callState:(BOOL)a0 fromScene:(long long)a1;
- (void)onResponse:(id)a0;
- (void)callState:(BOOL)a0 fromScene:(long long)a1 params:(id)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
