@class NSString, NSDate;

@interface AWEBindGuideTaskStorageModel : AWEBaseApiModel <NSCoding, MTLJSONSerializing>

@property (nonatomic) long long showCount;
@property (nonatomic) BOOL isClickedInSettingEntrance;
@property (nonatomic) BOOL isClickedInAccountManageEntrance;
@property (retain, nonatomic) NSDate *firstShowDate;
@property (retain, nonatomic) NSDate *lastShowDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
