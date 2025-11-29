@class NSString;

@interface AWEDTOStyleInfoEntry : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long textColor;
@property (nonatomic) long long textBorderColor;
@property (copy, nonatomic) NSString *fontId;
@property (nonatomic) long long fontSize;
@property (nonatomic) long long bgStyle;
@property (nonatomic) long long alignType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
