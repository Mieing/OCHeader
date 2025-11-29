@class NSString;
@protocol IESLiveURLSchemaHandler;

@interface IESLiveADPopupSchemaParser : NSObject <IESLiveSchemaParser>

@property (retain, nonatomic) id<IESLiveURLSchemaHandler> urlSchemaHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_schema;

- (void)handleSchemeWithModel:(id)a0 fromInside:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
