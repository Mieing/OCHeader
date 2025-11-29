@class NSString, NSArray;

@interface AWEIMPushGuideV4Selection : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *selectionType;
@property (copy, nonatomic) NSString *selectionTitle;
@property (copy, nonatomic) NSString *iconUrlString;
@property (copy, nonatomic) NSString *confirmButtonText;
@property (copy, nonatomic) NSArray *actions;
@property (nonatomic) BOOL selected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
