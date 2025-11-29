@class NSString;

@interface FinderContactExtInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *country;
@property (retain, nonatomic) NSString *province;
@property (retain, nonatomic) NSString *city;
@property (nonatomic) int sex;
@property (nonatomic) unsigned int birthYear;
@property (nonatomic) unsigned int birthMonth;
@property (nonatomic) unsigned int birthDay;

+ (void)initialize;

- (void)setBirthDay:(unsigned int)a0;
- (unsigned int)birthDay;
- (void)setBirthMonth:(unsigned int)a0;
- (unsigned int)birthMonth;
- (void)setBirthYear:(unsigned int)a0;
- (unsigned int)birthYear;
- (void)setSex:(int)a0;
- (int)sex;
- (void)setCity:(id)a0;
- (id)city;
- (void)setProvince:(id)a0;
- (id)province;
- (void)setCountry:(id)a0;
- (id)country;

@end
