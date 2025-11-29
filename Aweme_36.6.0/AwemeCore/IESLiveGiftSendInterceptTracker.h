@class NSDictionary, NSString, HTSEventContext;

@interface IESLiveGiftSendInterceptTracker : NSObject

@property (nonatomic) BOOL enableUpload;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) BOOL isProps;
@property (nonatomic) long long interceptCode;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSString *source;
@property (retain, nonatomic) HTSEventContext *trackContext;

- (id)initWithSource:(id)a0 isAnchor:(BOOL)a1 isProps:(BOOL)a2 extra:(id)a3 trackContext:(id)a4;
- (void)trackIntercept:(long long)a0;
- (void)trackIntercept:(long long)a0 params:(id)a1;
- (void)trackIntercept:(long long)a0 extra:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
