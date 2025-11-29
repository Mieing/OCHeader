@class NSString;

@interface TIMXBroadSendRes : NSObject <TIMXBroadSendProtocol, TIMXInstanceScopeAlwaysNewDIComponent>

@property (nonatomic) unsigned long long status;
@property (nonatomic) long long checkCode;
@property (copy, nonatomic) NSString *checkMessage;
@property (copy, nonatomic) NSString *extraInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
