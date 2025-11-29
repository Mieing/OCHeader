@class NSString;

@interface AWETransformerLynxCardAdapter : NSObject <AWETransformerAdapterProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)transformToJSONObjectFrom:(id)a0 topMargin:(double)a1 bottomMargin:(double)a2 response:(id)a3;

@end
