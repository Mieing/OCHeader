@class NSString, NSDictionary, UIImage;

@interface IESLiveInteractOpenContainerCastInfo : NSObject

@property (copy, nonatomic) NSString *appID;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) NSString *rtcExtInfo;
@property (copy, nonatomic) NSString *liveCoreExtraInfo;
@property (nonatomic) int targetLayout;
@property (copy, nonatomic) NSString *openContainerAppName;
@property (copy, nonatomic) NSString *openContainerAppIcon;
@property (readonly, copy, nonatomic) NSString *typeStrForTrack;
@property (readonly, copy, nonatomic) NSString *castIdentifier;
@property (retain, nonatomic) UIImage *castScreenIcon;
@property (retain, nonatomic) UIImage *castBackgroundImage;
@property (copy, nonatomic) NSString *castBackgroundImageURL;
@property (copy, nonatomic) NSString *castBusinessIconURL;
@property (readonly, nonatomic) BOOL isTargetUILayoutFloatDynamicUsingSingleViewOpt;
@property (readonly, nonatomic) int profile;
@property (readonly, nonatomic) int fps;
@property (readonly, nonatomic) double leftMargin;

- (void)updateRTCExtInfoWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateOpenContainerAppInfo;
- (id)anchorCastConfig;
- (void)updateWithType:(unsigned long long)a0 appID:(id)a1 extraInfo:(id)a2;
- (void)updateWithTargetLayout:(int)a0 rtcExtInfo:(id)a1 liveCoreExtraInfo:(id)a2;
- (void)updateCastInfoWithInfo:(id)a0;
- (BOOL)continueStartProcessWithType:(unsigned long long)a0 appID:(id)a1;
- (BOOL)continueStopProcessWithType:(unsigned long long)a0 appID:(id)a1;
- (id)sonicAppContext;
- (void).cxx_destruct;
- (void)clear;
- (BOOL)isInvalid;

@end
