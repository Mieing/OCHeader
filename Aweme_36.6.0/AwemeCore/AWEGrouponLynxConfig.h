@class NSNumber, NSString;

@interface AWEGrouponLynxConfig : NSObject

@property (nonatomic) long long widthMode;
@property (nonatomic) long long heightMode;
@property (nonatomic) BOOL isHeightFitAndWidthFixed;
@property (nonatomic) BOOL isEnableiPadConfig;
@property (retain, nonatomic) NSNumber *iPadRadio;
@property (copy, nonatomic) NSString *containerBgColor;
@property (nonatomic) unsigned long long loadStrategy;

- (void).cxx_destruct;

@end
