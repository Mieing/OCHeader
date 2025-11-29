@class NSString;
@protocol IESLiveAnchorMoreToolsPanelInterface;

@interface IESLiveMoreToolsPanelSchemaParser : NSObject <IESLiveSchemaParser>

@property (retain, nonatomic) id<IESLiveAnchorMoreToolsPanelInterface> moreToolsPanelInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_schema;

- (void)handleSchemeWithModel:(id)a0 fromInside:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
