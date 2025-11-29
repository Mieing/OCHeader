@class NSString;

@interface AWELuckyCatPendantScrollNumbers : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long position;
@property (nonatomic) long long rewardType;
@property (nonatomic) long long initialNumber;
@property (nonatomic) long long finalNumber;
@property (copy, nonatomic) NSString *fontName;
@property (copy, nonatomic) NSString *textColor;
@property (nonatomic) BOOL needBold;
@property (nonatomic) unsigned long long textSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
