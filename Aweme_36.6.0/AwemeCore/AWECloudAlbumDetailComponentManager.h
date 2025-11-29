@class NSArray, NSString;
@protocol IESServiceProvider;

@interface AWECloudAlbumDetailComponentManager : NSObject <AWECloudAlbumDetailComponentManager>

@property (readonly, weak, nonatomic) id<IESServiceProvider> context;
@property (readonly, copy, nonatomic) NSArray *classes;
@property (readonly, copy, nonatomic) NSArray *components;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentsDidLoad;
- (void)componentsWillAppear;
- (void)componentsDidAppear;
- (void)componentsWillDisappear;
- (void)componentsDidDisappear;
- (id)initWithContext:(id)a0 classes:(id)a1;
- (void).cxx_destruct;

@end
