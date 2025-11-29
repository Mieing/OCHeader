@class NSString, IESECURLModel, NSArray;

@interface IESECWinBubbleModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *mainTitle;
@property (retain, nonatomic) IESECURLModel *headerIcon;
@property (retain, nonatomic) NSArray *itemImg;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long bubbleType;
@property (copy, nonatomic) NSString *guideBubbleText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemImgJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
