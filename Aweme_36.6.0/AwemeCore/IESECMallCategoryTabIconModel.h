@class NSString;

@interface IESECMallCategoryTabIconModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (copy, nonatomic) NSString *lightIcon;
@property (copy, nonatomic) NSString *darkIcon;
@property (copy, nonatomic) NSString *lightSelectedIcon;
@property (copy, nonatomic) NSString *darkSelectedIcon;
@property (copy, nonatomic) NSString *lightIndicatorColor;
@property (copy, nonatomic) NSString *darkIndicatorColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
