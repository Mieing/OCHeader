@class NSString;

@interface IESECLiveGoodsRitTagUIConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long textSplitorStyle;
@property (copy, nonatomic) NSString *textSplitorColor;
@property (nonatomic) double textFontSize;
@property (retain, nonatomic) NSString *textColorARGBHexStr;
@property (retain, nonatomic) NSString *textBGColorARGBHexStr;
@property (nonatomic) BOOL iconCornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
