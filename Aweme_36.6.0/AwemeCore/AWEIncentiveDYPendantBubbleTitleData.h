@class NSString;

@interface AWEIncentiveDYPendantBubbleTitleData : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long textSize;
@property (copy, nonatomic) NSString *textColor;
@property (nonatomic) BOOL hasArrow;
@property (nonatomic) BOOL needBold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
