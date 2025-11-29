@class NSArray, NSString;

@interface AWESchoolNearestDataController : NSObject <AWESchoolNearestDataControllerProtocol>

@property (copy, nonatomic) NSArray *schoolsList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestNearSchoolWithPermission:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
