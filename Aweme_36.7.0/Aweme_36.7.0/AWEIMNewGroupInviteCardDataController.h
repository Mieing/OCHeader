@class NSDictionary, NSString;

@interface AWEIMNewGroupInviteCardDataController : NSObject <IESIMGroupInviteCardDataControllerProtocol>

@property (retain, nonatomic) NSDictionary *params;
@property BOOL isRequesting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchDataWithType:(long long)a0 completion:(id /* block */)a1;
- (void)fetchDataOtherGroupWithType:(long long)a0 completion:(id /* block */)a1;
- (void)processExtParameterForURL:(id *)a0 resultParams:(id)a1;
- (void).cxx_destruct;
- (id)initWithParams:(id)a0;

@end
