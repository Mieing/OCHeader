@class NSString;

@interface IESLiveInteractAudioMonitorReason : NSObject

@property (copy, nonatomic) NSString *reasonTag;
@property (copy, nonatomic) NSString *callClassName;
@property (copy, nonatomic) NSString *callMethodName;
@property (copy, nonatomic) NSString *logString;
@property (copy, nonatomic) NSString *detail;
@property (copy, nonatomic) NSString *cert;

- (id)initWithReason:(id)a0 callClassName:(id)a1 callMethodName:(id)a2;
- (id)initWithReason:(id)a0 detail:(id)a1;
- (void).cxx_destruct;
- (id)initWithReason:(id)a0;

@end
