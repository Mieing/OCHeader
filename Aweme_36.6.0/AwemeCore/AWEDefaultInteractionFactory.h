@class NSString;

@interface AWEDefaultInteractionFactory : NSObject <AWEPlayInteractionVCFactoryProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createInteractionViewControllerWithMediaType:(long long)a0;


@end
