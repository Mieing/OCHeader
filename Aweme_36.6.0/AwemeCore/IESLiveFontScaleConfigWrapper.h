@class NSString;
@protocol IESLiveFontScaleConfig;

@interface IESLiveFontScaleConfigWrapper : NSObject <IESLiveFontScaleConfig>

@property (retain, nonatomic) id<IESLiveFontScaleConfig> fontScaleConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
