@class NSString;

@interface AWEShowMonetizeAOOPInterceptorResult : NSObject

@property (readonly, nonatomic, getter=isShouldIntercept) BOOL shouldIntercept;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, nonatomic, getter=isShouldReport) BOOL shouldReport;

- (id)initWithShouldIntercept:(BOOL)a0 reason:(id)a1;
- (id)initWithShouldIntercept:(BOOL)a0 reason:(id)a1 shouldReport:(BOOL)a2;
- (void).cxx_destruct;
- (id)description;

@end
