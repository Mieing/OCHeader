@class NSString;

@interface AWEIMUserBubbleOffsetModel : AWEBaseBizConfigModel <MTLJSONSerializing>

@property (nonatomic) double horizontal;
@property (nonatomic) double vertical;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
