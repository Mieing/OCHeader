@class NSString;

@interface AWEECommerceRecorderTemplate : NSObject <ACCBusinessTemplate>

@property (nonatomic) BOOL supportBeauty;
@property (nonatomic) BOOL disableUpload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)componentClasses;
- (id)componentPluginClasses;
- (id)baseComponent;

@end
