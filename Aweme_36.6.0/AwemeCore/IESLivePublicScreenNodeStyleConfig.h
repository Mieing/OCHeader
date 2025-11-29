@class NSParagraphStyle, IESLivePublicScreenDisplayTextParseConfig;

@interface IESLivePublicScreenNodeStyleConfig : NSObject

@property (nonatomic) double preferredMaxLayoutWidth;
@property (retain, nonatomic) NSParagraphStyle *paragraphStyle;
@property (nonatomic) long long fontWeight;
@property (nonatomic) double fontSize;
@property (nonatomic) unsigned long long fontSizeType;
@property (nonatomic) BOOL enableRTLOptimize;
@property (retain, nonatomic) IESLivePublicScreenDisplayTextParseConfig *templateEngineConfig;
@property (copy, nonatomic) id /* block */ tapTextAction;

+ (id)defaultConfiguration;

- (void).cxx_destruct;

@end
