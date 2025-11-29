@class NSString;

@interface AWEEcomLynxModuleModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) double topMargin;
@property (nonatomic) double bottomMargin;
@property (nonatomic) double leftMargin;
@property (nonatomic) double rightMargin;
@property (copy, nonatomic) NSString *alignmentMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
