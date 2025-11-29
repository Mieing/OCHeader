@class NSString;

@interface AWEPzVersionPeriodShowRecordModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *versionName;
@property (nonatomic) long long showCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithVersionName:(id)a0 showCount:(long long)a1;
- (void).cxx_destruct;

@end
