@class NSString, NSDictionary;
@protocol CJPayAPIWrapperProtocol, CJPayAPIDelegate;

@interface CJPayAPIRequestMsgWrapper : NSObject <CJPayAPIDelegate>

@property (copy, nonatomic) NSString *identify;
@property (copy, nonatomic) NSDictionary *reqParams;
@property (retain, nonatomic) id<CJPayAPIDelegate> originalDelegate;
@property (weak, nonatomic) id<CJPayAPIWrapperProtocol> wrapperProtocol;
@property (nonatomic) BOOL isFromLynxSwitch;
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
