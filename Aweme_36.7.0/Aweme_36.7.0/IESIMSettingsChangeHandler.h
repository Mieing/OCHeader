@class NSString;

@interface IESIMSettingsChangeHandler : NSObject <AWEAppAwemeSettingMessage, IESIMSettingsChangeProtocol>

@property (copy, nonatomic) id /* block */ awemeSettingDidChangeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
