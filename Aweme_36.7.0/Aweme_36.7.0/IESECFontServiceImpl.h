@class NSString;

@interface IESECFontServiceImpl : NSObject <IESECFontService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)currentFontScale;
+ (BOOL)bigFontModeOn;
+ (id)fontOfSize:(double)a0 weight:(double)a1;
+ (double)enlargeSize:(double)a0;
+ (id)fontOfSize:(double)a0;


@end
