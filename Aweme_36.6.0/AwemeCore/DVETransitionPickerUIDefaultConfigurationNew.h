@class NSString;
@protocol DVEPickerCategoryUIConfigurationProtocol, DVEPickerEffectUIConfigurationProtocol;

@interface DVETransitionPickerUIDefaultConfigurationNew : NSObject <DVEPickerUIConfigurationProtocol>

@property (retain, nonatomic) id<DVEPickerEffectUIConfigurationProtocol> effectUIConfig;
@property (retain, nonatomic) id<DVEPickerCategoryUIConfigurationProtocol> categoryUIConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
