@class NSString, NSArray;

@interface AWEMemoriesThemeMemoryModel : MTLModel <MTLJSONSerializing, AWERecallThemeModelProtocol>

@property (readonly, copy, nonatomic) NSString *themeId;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subTitle;
@property (readonly, copy, nonatomic) NSString *tagId;
@property (readonly, copy, nonatomic) NSString *musicId;
@property (readonly, nonatomic) NSArray *localIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)updateLocalIdentifiers:(id)a0;
- (void).cxx_destruct;

@end
