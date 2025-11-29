@class NSDictionary, NSString;

@interface IESLiveClientDiagnoseResultManager : NSObject <IESLiveClientDiagnoseResultService>

@property (copy, nonatomic) id /* block */ clientDiganoseBlock;
@property (copy) NSDictionary *clientDignoseDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)addClientDiagnose:(id)a0;
- (id)diagnoseResultKeyForType:(long long)a0;
- (id)diagnoseResultForType:(long long)a0;
- (void)removeClientDiagnose:(id)a0;
- (void).cxx_destruct;

@end
