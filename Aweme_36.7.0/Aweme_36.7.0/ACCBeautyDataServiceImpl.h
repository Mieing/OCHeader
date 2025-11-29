@class NSString, AWEVideoPublishViewModel;

@interface ACCBeautyDataServiceImpl : NSObject <ACCBeautyDataService>

@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (readonly, copy, nonatomic) NSString *enterFrom;
@property (nonatomic) long long gender;
@property (readonly, nonatomic) unsigned long long gameType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referExtra;
- (id)initWithRepository:(id)a0;
- (void).cxx_destruct;

@end
