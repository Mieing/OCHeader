@class NSString;

@interface BDUGLuckyCatRouterProxySubItemModel : NSObject <BDModelCustom>

@property (nonatomic) double startTime;
@property (copy, nonatomic) NSString *targetSchema;
@property (nonatomic) double endTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
