@class NSString, NSDictionary, NSDate, IESOuterTestTFExpireCheckResponse;

@interface IESOuterTestTFExpireAlertViewModel : NSObject

@property (retain, nonatomic) IESOuterTestTFExpireCheckResponse *tfExpireModel;
@property (copy, nonatomic) NSDictionary *traceParams;
@property (copy, nonatomic) id /* block */ joinAction;
@property (copy, nonatomic) id /* block */ cancelAction;
@property (readonly, copy, nonatomic) NSString *titleString;
@property (readonly, copy, nonatomic) NSString *contentString;
@property (readonly, nonatomic) NSDate *expireDate;
@property (readonly, nonatomic) long long alertStyle;

- (void)clickCloseButton;
- (void)clickJoinButton;
- (void)didActive;
- (id)initWithModel:(id)a0 traceParams:(id)a1;
- (void).cxx_destruct;

@end
