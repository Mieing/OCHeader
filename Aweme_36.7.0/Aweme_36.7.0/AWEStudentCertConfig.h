@class NSDictionary, NSString, NSArray;

@interface AWEStudentCertConfig : NSObject

@property (copy, nonatomic) NSDictionary *originResult;
@property (copy, nonatomic) NSString *authNotesUrl;
@property (copy, nonatomic) NSString *xuexinOriginUrl;
@property (retain, nonatomic) NSString *authBottomBarRegular;
@property (retain, nonatomic) NSString *authBottomBarUrl;
@property (retain, nonatomic) NSArray *guideConfigList;
@property (retain, nonatomic) NSDictionary *requestInfo;
@property (copy, nonatomic) NSString *infoPageUrlRegular;
@property (retain, nonatomic) NSDictionary *educationalInfo;
@property (retain, nonatomic) NSString *educationalTitle;
@property (retain, nonatomic) NSArray *educationalShowList;

- (void)updateEducationalInfo:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
