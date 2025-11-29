@class NSString, NSNumber;

@interface IESECSKUTextConfigModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *fontColor;
@property (retain, nonatomic) NSNumber *fontSize;
@property (nonatomic) BOOL bold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
