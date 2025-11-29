@class NSString;

@interface AWEOpenAuthInfoAlertScope : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *scopeName;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *negativeButton;
@property (copy, nonatomic) NSString *positiveButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
