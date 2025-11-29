@class NSArray, NSString;

@interface AWELuckyCatPopupManageInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long priority;
@property (copy, nonatomic) NSArray *blockPage;
@property (copy, nonatomic) NSArray *popPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
