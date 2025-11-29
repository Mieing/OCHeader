@class IESECBackgroundDescribeInfo, NSArray, NSString, IESECActionDefine;

@interface IESECMultiTextWithIconElement : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECBackgroundDescribeInfo *background;
@property (nonatomic) double space;
@property (nonatomic) long long leadingSpace;
@property (copy, nonatomic) NSArray *textWithIconElementList;
@property (nonatomic) BOOL isScrollable;
@property (nonatomic) unsigned long long alignStrategy;
@property (retain, nonatomic) IESECActionDefine *action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textWithIconElementListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
