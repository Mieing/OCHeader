@class BDUGLuckyPendantPositionModel, NSArray, NSDictionary, NSString, BDUGLuckyTimerPendantTipConfig;

@interface BDUGLuckyTimerPendentConfig : BDUGLuckyJSONModel

@property (copy, nonatomic) NSArray *scenes;
@property (copy, nonatomic) NSDictionary *pendantRules;
@property (copy, nonatomic) NSString *pendantStyle;
@property (retain, nonatomic) BDUGLuckyPendantPositionModel *position;
@property (retain, nonatomic) BDUGLuckyPendantPositionModel *clientCustomizedPosition;
@property (copy, nonatomic) NSString *pendantSize;
@property (copy, nonatomic) NSString *iconSize;
@property (copy, nonatomic) NSArray *tabBg;
@property (nonatomic) BOOL hasBorder;
@property (copy, nonatomic) NSString *borderColor;
@property (nonatomic) double borderWidth;
@property (copy, nonatomic) NSString *tabSize;
@property (nonatomic) BOOL processBarEnable;
@property (copy, nonatomic) NSString *processBarColor;
@property (copy, nonatomic) NSString *processBarBackgroundColor;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSDictionary *stateContents;
@property (nonatomic) BOOL needLoginGuide;
@property (nonatomic) double fullDisplayDuration;
@property (nonatomic) double exitDuration;
@property (retain, nonatomic) BDUGLuckyTimerPendantTipConfig *tipConf;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
