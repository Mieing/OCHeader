@class NSString;

@interface AWEDanmakuSettingsConfigModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *info;
@property (nonatomic) long long pointCount;
@property (nonatomic) double valuePercent;
@property (nonatomic) long long index;
@property (nonatomic) unsigned long long danmakuScene;
@property (nonatomic) unsigned long long themeColorType;
@property (copy, nonatomic) id /* block */ responseContinueValueBlock;
@property (copy, nonatomic) id /* block */ responseDiscreteValueBlock;

- (void).cxx_destruct;

@end
