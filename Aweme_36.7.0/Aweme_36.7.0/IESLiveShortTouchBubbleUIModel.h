@class NSString;

@interface IESLiveShortTouchBubbleUIModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textColor;
@property (nonatomic) long long textSize;
@property (copy, nonatomic) NSString *bgColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
