@class NSString;
@protocol IESServiceProvider;

@interface ACCAEBottomBarComponentSortImpl : NSObject <DVEComponentSortProtocol>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
