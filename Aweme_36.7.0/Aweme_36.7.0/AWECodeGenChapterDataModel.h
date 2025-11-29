@class NSString, NSArray;

@interface AWECodeGenChapterDataModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *recommendType;
@property (nonatomic) BOOL disableEdit;
@property (copy, nonatomic) NSArray *adChapterIndexArray;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
