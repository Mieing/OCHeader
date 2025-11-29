@class NSDictionary, IESOuterTestPopupCheckResponse, NSString;

@interface IESOuterTestPopupViewModel : NSObject

@property (retain, nonatomic) IESOuterTestPopupCheckResponse *checkVersionModel;
@property (copy, nonatomic) NSDictionary *traceParams;
@property (nonatomic) double showTimeStamp;
@property (copy, nonatomic) id /* block */ joinAction;
@property (copy, nonatomic) id /* block */ cancelAction;
@property (readonly, copy, nonatomic) NSString *titleString;
@property (readonly, copy, nonatomic) NSString *contentString;
@property (readonly, copy, nonatomic) NSString *updateVersionString;

+ (BOOL)hasInstallTestflightApp;
+ (id)testflightURL;

- (void)clickCloseButton;
- (id)clickJoinButton;
- (void)didActive;
- (id)initWithCheckVersionModel:(id)a0 traceParams:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
