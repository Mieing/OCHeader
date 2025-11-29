@class NSString;

@interface AWELuckyCatPendantTextDescTemplate : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *fontName;
@property (copy, nonatomic) NSString *textColor;
@property (nonatomic) BOOL needBold;
@property (nonatomic) unsigned long long textSize;
@property (copy, nonatomic) NSString *textType;
@property (copy, nonatomic) NSString *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)extraDic;
- (void).cxx_destruct;

@end
