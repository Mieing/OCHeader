@class NSString, NSMutableDictionary, NSDictionary;

@interface IESLiveSettingsDictStorage : NSObject <IESLiveSettingsDictStorage>

@property BOOL fetched;
@property (copy, nonatomic) NSString *settingsKey;
@property (retain, nonatomic) NSMutableDictionary *innerDict;
@property (copy, nonatomic) NSDictionary *dict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
