@interface AWECollegeInfoDataController : NSObject

@property (nonatomic) BOOL isRequestOnAir;

- (void)fetchCollegeListWithSchoolName:(id)a0 completion:(id /* block */)a1;

@end
