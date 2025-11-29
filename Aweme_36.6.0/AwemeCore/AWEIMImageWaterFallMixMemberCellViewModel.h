@class AWEIMMixedImageUserInfo, NSString, AWEIMImageWaterFallItemUIConfig;

@interface AWEIMImageWaterFallMixMemberCellViewModel : NSObject <AWEIMImageWaterFallItemProtocol>

@property (retain, nonatomic) AWEIMMixedImageUserInfo *mixedImageUserInfo;
@property (nonatomic) long long type;
@property (retain, nonatomic) AWEIMImageWaterFallItemUIConfig *uiConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)uidForAvatar;
- (id)encryptedImageInfo;
- (id)initWithMemberInfo:(id)a0;
- (void)p_configWithMemberInfo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
