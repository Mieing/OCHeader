@class NSArray, NSString;

@interface IESLiveResolutionChooseViewBaseConfig : NSObject

@property (copy, nonatomic) NSArray *resolutionItemArray;
@property (nonatomic, getter=isForLandscape) BOOL forLandscape;
@property (nonatomic) unsigned long long currentIndex;
@property (nonatomic) BOOL showHDRSwitch;
@property (nonatomic) BOOL hdrSwitchEnabled;
@property (copy, nonatomic) NSString *hdrSwitchTitle;
@property (copy, nonatomic) NSString *hdrSwitchContent;

+ (BOOL)newStyleEnable;

- (void).cxx_destruct;

@end
