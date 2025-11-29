@class NSString, NSArray;

@interface AWEECOMIMChatTopInfoButtonStyle : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) double borderRadius;
@property (copy, nonatomic) NSString *textColor;
@property (nonatomic) double textSize;
@property (copy, nonatomic) NSArray *padding;
@property (copy, nonatomic) NSString *backgroundColorStart;
@property (copy, nonatomic) NSString *backgroundColorEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
