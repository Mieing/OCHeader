@class NSArray, NSString;

@interface IESIMMessageCellComponentConfigService : HTSService <IESIMMessageCellComponentConfigServiceProtocol_OLD>

@property (retain, nonatomic) NSArray *settingBlockList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
