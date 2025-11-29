@class NSString, AWEIMUserBubbleOffsetModel;

@interface AWEIMSingleUserBubbleModel : AWEBaseBizConfigModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *backgroundUrl;
@property (copy, nonatomic) NSString *textColor;
@property (retain, nonatomic) AWEIMUserBubbleOffsetModel *offset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)offsetJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
