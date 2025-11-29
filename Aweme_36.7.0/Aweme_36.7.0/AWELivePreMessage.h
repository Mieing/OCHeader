@class NSString;

@interface AWELivePreMessage : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long messageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
