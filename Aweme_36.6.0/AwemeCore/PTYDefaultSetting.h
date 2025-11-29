@class NSDictionary, NSString;

@interface PTYDefaultSetting : NSObject <PTYSettingProtocol>

@property (retain, nonatomic) NSDictionary *contentDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
