@class NSString;

@interface IESIMConversationSettingInitJobDataHost : IESIMJobManagerBaseDataHost <IESIMConversationSettingInitJobDataHost>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)taskMetaInfoList;
- (id)fetcherList;

@end
