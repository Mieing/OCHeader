@class NSString, NSNumber;

@interface IESLiveCommonCastScreenRunnerApi : HTSLiveApi

@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSNumber *roomID;

- (id)initWithBusinessIdentifier:(id)a0 type:(long long)a1 roomID:(id)a2;
- (void)uploadCastScreenStatus:(BOOL)a0 complete:(id /* block */)a1;
- (void)startInteractiveCastWithType:(long long)a0 appID:(id)a1 profile:(int)a2 callback:(id /* block */)a3;
- (void)stopInteractiveCastWithType:(long long)a0 appID:(id)a1 callback:(id /* block */)a2;
- (void).cxx_destruct;

@end
