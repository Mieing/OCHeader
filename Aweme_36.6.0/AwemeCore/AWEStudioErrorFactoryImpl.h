@class NSString;

@interface AWEStudioErrorFactoryImpl : NSObject <AWEStudioErrorFactoryProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)errorWithDomain:(id)a0 code:(long long)a1 userInfo:(id)a2 extraInfo:(id)a3;

@end
