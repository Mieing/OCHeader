@class NSString;

@interface AWECountryFlagDataModel : NSObject

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *chineseName;
@property (retain, nonatomic) NSString *englishName;
@property (retain, nonatomic) NSString *imageUrl;
@property (retain, nonatomic) NSString *imageBase64;
@property (retain, nonatomic) NSString *imageMd5;

- (id)initWithKey:(id)a0 chineseName:(id)a1 englishName:(id)a2 imageUrl:(id)a3 imageBase64:(id)a4 imageMd5:(id)a5;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithKey:(id)a0;

@end
