@class NSString, NSArray;

@interface AWECodeGenGameTagInfoModel : AWEBaseDataModel

@property (nonatomic) long long tagId;
@property (copy, nonatomic) NSString *tagName;
@property (copy, nonatomic) NSArray *gameIdArray;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
