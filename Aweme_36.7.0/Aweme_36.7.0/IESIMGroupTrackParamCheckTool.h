@interface IESIMGroupTrackParamCheckTool : NSObject

+ (id)sharedInstance;

- (BOOL)checkTrackParamAvailableWithScene:(id)a0 target:(id)a1 event:(id)a2 params:(id)a3 isFromOpenCapability:(BOOL)a4;

@end
