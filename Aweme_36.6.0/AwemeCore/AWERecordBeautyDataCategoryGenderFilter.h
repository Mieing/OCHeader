@class NSString;

@interface AWERecordBeautyDataCategoryGenderFilter : NSObject <AWERecordBeautyDataFilterProtocol>

@property (nonatomic) long long gender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithGender:(long long)a0;
- (long long)getGenderOfCategory:(id)a0;
- (id)filter:(id)a0;

@end
