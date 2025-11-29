@class NSString, IESLiveVerify;
@protocol IESLiveURLSchemaHandler;

@interface IESLiveWithdrawSchemaParser : NSObject <IESLiveSchemaParser>

@property (retain, nonatomic) IESLiveVerify *verify;
@property (retain, nonatomic) id<IESLiveURLSchemaHandler> schemaHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_schema;

- (void)handleSchemeWithModel:(id)a0 fromInside:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
