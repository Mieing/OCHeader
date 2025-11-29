@class NSArray, NSString;

@interface ACCMVTemplateInfo : NSObject

@property (copy, nonatomic) NSArray *videoCoverURLs;
@property (copy, nonatomic) NSArray *photoCoverURLs;
@property (nonatomic) long long minMaterial;
@property (nonatomic) long long maxMaterial;
@property (nonatomic) long long photoInputWidth;
@property (nonatomic) long long photoInputHeight;
@property (copy, nonatomic) NSString *photoFillMode;
@property (nonatomic) long long templateType;

+ (id)MVTemplateInfoFromEffect:(id)a0 coverURLPrefixs:(id)a1;

- (void).cxx_destruct;

@end
