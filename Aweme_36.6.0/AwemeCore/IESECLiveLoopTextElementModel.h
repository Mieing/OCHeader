@class NSArray, NSString;

@interface IESECLiveLoopTextElementModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *textArray;
@property (retain, nonatomic) NSString *textColor;
@property (nonatomic) double textFontSize;
@property (nonatomic) BOOL needBoldText;
@property (nonatomic) long long animGap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generateWithMsg:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
