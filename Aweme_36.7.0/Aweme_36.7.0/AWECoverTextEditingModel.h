@class AWECoverTextPackage, NSString, NSArray, AWEStoryTextImageModel;

@interface AWECoverTextEditingModel : MTLModel

@property (copy, nonatomic) NSString *effectId;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSArray *texts;
@property (copy, nonatomic) AWEStoryTextImageModel *textModel;
@property (copy, nonatomic) AWECoverTextPackage *textPackage;
@property (nonatomic) unsigned long long cursorLocation;

- (id)trackTextIdString;
- (void).cxx_destruct;

@end
