@class NSString;

@interface UserInfoForReport : NSObject

@property (retain, nonatomic) NSString *country;
@property (retain, nonatomic) NSString *district;
@property (retain, nonatomic) NSString *city;
@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned int sex;
@property (nonatomic) unsigned int distance;
@property (nonatomic) unsigned int hasAlbumFlag;
@property (nonatomic) unsigned int hasSignature;
@property (nonatomic) unsigned int nickNameHasEmoji;
@property (nonatomic) unsigned int hasFinderFlag;

+ (id)genFromLBSContactInfo:(id)a0;
+ (id)genFromCContact:(id)a0;
+ (unsigned int)parseDistanceStr:(id)a0;

- (void).cxx_destruct;

@end
