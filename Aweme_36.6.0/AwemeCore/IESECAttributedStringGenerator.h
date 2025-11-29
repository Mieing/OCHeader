@class NSString, NSMutableDictionary, NSDictionary;

@interface IESECAttributedStringGenerator : NSObject <IESECAttributedGeneratorProtocol>

@property (retain, nonatomic) NSMutableDictionary *attrs;
@property (copy, nonatomic) NSString *str;
@property (readonly, copy, nonatomic) id /* block */ setAttribute;
@property (readonly, copy, nonatomic) id /* block */ font;
@property (readonly, copy, nonatomic) id /* block */ fontSize;
@property (readonly, copy, nonatomic) id /* block */ boldFontSize;
@property (readonly, copy, nonatomic) id /* block */ textColor;
@property (readonly, copy, nonatomic) id /* block */ ARGBColor;
@property (readonly, copy, nonatomic) id /* block */ bgColor;
@property (readonly, copy, nonatomic) id /* block */ bgARGBColor;
@property (readonly, copy, nonatomic) id /* block */ colorNamed;
@property (readonly, copy, nonatomic) id /* block */ colorNamedAlpha;
@property (readonly, copy, nonatomic) id /* block */ baselineOffset;
@property (readonly, copy, nonatomic) id /* block */ lineHeight;
@property (readonly, copy, nonatomic) NSDictionary *attributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
