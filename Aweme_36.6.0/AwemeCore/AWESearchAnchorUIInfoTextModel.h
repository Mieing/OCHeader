@class NSString, NSNumber;

@interface AWESearchAnchorUIInfoTextModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textColor;
@property (retain, nonatomic) NSNumber *textFont;
@property (nonatomic) long long textType;
@property (nonatomic) BOOL isBold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
