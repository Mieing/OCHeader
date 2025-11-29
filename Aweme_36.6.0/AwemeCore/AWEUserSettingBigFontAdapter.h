@class NSString;

@interface AWEUserSettingBigFontAdapter : NSObject <AWEUserSettingBigFontAdapterProtocol>

@property (nonatomic) BOOL bigFontModeEnable;
@property (nonatomic) BOOL modernBigFontEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)adaptiveFontOfSize:(double)a0 weight:(long long)a1;
- (double)adaptiveChangeFontSize:(double)a0;

@end
