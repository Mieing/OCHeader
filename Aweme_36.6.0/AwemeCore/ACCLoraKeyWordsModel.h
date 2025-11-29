@class NSString;

@interface ACCLoraKeyWordsModel : NSObject

@property (readonly, copy, nonatomic) NSString *customAttributeStyleIdentifier;
@property (copy, nonatomic) NSString *keyWord;
@property (nonatomic) unsigned long long fromType;
@property (nonatomic) unsigned long long location;
@property (nonatomic) unsigned long long length;
@property (nonatomic) long long indexInCurrentGroup;
@property (nonatomic) long long indexInRecommendList;

- (void).cxx_destruct;

@end
