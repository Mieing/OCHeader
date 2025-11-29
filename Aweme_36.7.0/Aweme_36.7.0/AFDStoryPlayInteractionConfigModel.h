@class NSNumber, NSString;

@interface AFDStoryPlayInteractionConfigModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *commentMaxLine;
@property (retain, nonatomic) NSNumber *commentLoopSecond;
@property (copy, nonatomic) NSString *likeTagText;
@property (copy, nonatomic) NSString *commentBtnColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
