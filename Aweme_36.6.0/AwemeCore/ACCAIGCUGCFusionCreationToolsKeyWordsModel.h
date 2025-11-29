@class NSString, NSArray;

@interface ACCAIGCUGCFusionCreationToolsKeyWordsModel : NSObject

@property (readonly, copy, nonatomic) NSString *customAttributeStyleIdentifier;
@property (copy, nonatomic) NSString *keyWord;
@property (copy, nonatomic) NSString *backFullWord;
@property (nonatomic) unsigned long long fromType;
@property (nonatomic) unsigned long long location;
@property (nonatomic) unsigned long long length;
@property (copy, nonatomic) NSString *effectId;
@property (copy, nonatomic) NSString *creativeObjectType;
@property (copy, nonatomic) NSArray *outputResourceTypeArray;
@property (copy, nonatomic) NSString *aigcType;

+ (id)customAttributeStyleIdentifierWithKeyWord:(id)a0;

- (void).cxx_destruct;

@end
