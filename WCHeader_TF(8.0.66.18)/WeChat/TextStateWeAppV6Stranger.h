@class NSString, StatusExtInfo;

@interface TextStateWeAppV6Stranger : NSObject

@property (retain, nonatomic) NSString *encUsername;
@property (retain, nonatomic) NSString *nickname;
@property (nonatomic) int sex;
@property (retain, nonatomic) NSString *country;
@property (retain, nonatomic) NSString *province;
@property (retain, nonatomic) NSString *city;
@property (retain, nonatomic) NSString *signature;
@property (retain, nonatomic) NSString *bigHeadImgUrl;
@property (retain, nonatomic) NSString *smallHeadImgUrl;
@property (retain, nonatomic) NSString *textStatusId;
@property (retain, nonatomic) StatusExtInfo *textStatusExtInfo;
@property (nonatomic) BOOL snsFlag;
@property (retain, nonatomic) NSString *hashUsername;

- (id)generateContact;
- (void).cxx_destruct;

@end
