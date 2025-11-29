@class NSString;

@interface APCDTOTextConfigExtension : AWEBaseBizConfigModel <MTLJSONSerializing>

@property (nonatomic) BOOL ignoreBackBtnAlert;
@property (nonatomic) BOOL appendChallengeIdListInTextMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
