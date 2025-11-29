@class NSArray, ACCRecordMode, ACCRecordAuthStatus, NSString;

@interface ACCRecordContainerMode : ACCRecordMode <NSCopying> {
    long long _modeId;
    NSString *_trackIdentifier;
}

@property (readonly, nonatomic) ACCRecordAuthStatus *authStatus;
@property (copy, nonatomic) NSArray *submodes;
@property (retain, nonatomic) NSArray *submodeTitles;
@property (weak, nonatomic) ACCRecordMode *currentMode;
@property (nonatomic) long long currentIndex;
@property (nonatomic) long long defaultIndex;
@property (readonly, nonatomic) long long realModeId;
@property (readonly, copy, nonatomic) NSString *realTrackIdentifier;

- (long long)realBusinessModeId;
- (long long)currentCaptureFrameRationType;
- (BOOL)autoComplete;
- (void)setCurrentCaptureFrameRationType:(long long)a0;
- (void)configWithModesArray:(id)a0 titles:(id)a1 landingMode:(long long)a2 defaultModeIndex:(long long)a3;
- (unsigned long long)indexOfSubmodeWithModeID:(long long)a0;
- (long long)lengthMode;
- (BOOL)isMixHoldTapVideo;
- (void)setShowFrameCorner:(BOOL)a0;
- (id)submodeWithLength:(long long)a0;
- (BOOL)showFrameCorner;
- (unsigned long long)indexOfSubmode:(id)a0;
- (void).cxx_destruct;
- (long long)buttonType;
- (BOOL)isEqual:(id)a0;
- (id)trackIdentifier;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isVideo;
- (BOOL)isPhoto;
- (long long)serverMode;
- (long long)modeId;
- (void)setModeId:(long long)a0;
- (unsigned long long)requiredPermission;
- (void)setTrackIdentifier:(id)a0;

@end
