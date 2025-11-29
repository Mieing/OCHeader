@class NSNumber, NSString;

@interface APCDTOPublishComposerExtension : AWEBaseBizConfigModel <MTLJSONSerializing>

@property (copy, nonatomic) NSNumber *disablePublishCancel;
@property (copy, nonatomic) NSNumber *disablePublishFailRetry;
@property (copy, nonatomic) NSNumber *disablePublishLaunchRetry;
@property (copy, nonatomic) NSString *backupPublishPopupMainTitle;
@property (retain, nonatomic) id reeditAweme;
@property (retain, nonatomic) id reeditAnchorInfo;
@property (copy, nonatomic) NSNumber *disablePublishPageAddBtn;
@property (copy, nonatomic) NSNumber *directEnterPublishPageFromDraft;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isReeditAweme;
- (void).cxx_destruct;

@end
