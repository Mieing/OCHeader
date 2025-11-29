@class NSString;

@interface AWESearchPreRequestGeneralProvider : AWESearchPreRequestBaseProvider <AWESearchPreRequestVerticalProviderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)prefetchID;
+ (id)preRequestManagerWithObject:(id)a0;
+ (id)requestIdentifier:(id)a0;


@end
