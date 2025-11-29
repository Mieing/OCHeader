@class AWEIMSkylightSettingDataBuilder, AWEIMSkylightAvatarDataBuilder, NSDictionary;
@protocol AWEIMSkylightDataBizBuilderProtocol;

@interface AWEIMSkylightBizDataDirector : NSObject

@property (retain, nonatomic) AWEIMSkylightAvatarDataBuilder *friendsAvatarDataBuilder;
@property (retain, nonatomic) AWEIMSkylightSettingDataBuilder *settingBuilder;
@property (copy, nonatomic) NSDictionary *registerBizBuilderDict;
@property (retain, nonatomic) id<AWEIMSkylightDataBizBuilderProtocol> commonBizBuilder;

+ (void)postProcessSectionDataIfNeeded:(id)a0;

- (id)constructSectionDataWithContext:(id)a0;
- (id)setupRegisterBizBuilderDict;
- (id)constructBizViewModelsWithContext:(id)a0;
- (id)p_constructBizViewModelsWithContext:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
