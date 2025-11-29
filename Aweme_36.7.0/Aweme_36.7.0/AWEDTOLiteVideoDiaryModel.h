@class NSString;

@interface AWEDTOLiteVideoDiaryModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *themeId;
@property (copy, nonatomic) NSString *majorName;
@property (copy, nonatomic) NSString *minorName;
@property (copy, nonatomic) NSString *diaryType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
