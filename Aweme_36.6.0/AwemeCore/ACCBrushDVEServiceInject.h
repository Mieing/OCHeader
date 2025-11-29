@class NSArray, NSString;
@protocol DVEResourceLoaderProtocol;

@interface ACCBrushDVEServiceInject : NSObject <DVEVCContextExternalInjectProtocol>

@property (retain, nonatomic) id<DVEResourceLoaderProtocol> resourceLoader;
@property (copy, nonatomic) NSArray *subtypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)provideResourceLoader;
- (void).cxx_destruct;

@end
