@class NSString;

@interface MMFinderLiveBottomButtonBackgroundColorConfig : NSObject

@property (retain, nonatomic) NSString *commonBGColorHex;
@property (retain, nonatomic) NSString *bottomButtonBGColorHexLandscapeLivePortraitMode;
@property (retain, nonatomic) NSString *bottomButtonBGColorHexInConnectMic;

+ (id)configFromButtonInfo:(id)a0;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
