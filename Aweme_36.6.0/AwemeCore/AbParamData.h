@class NSString, NSMutableDictionary, NSData;

@interface AbParamData : IESLivePBBaseMessage

@property (nonatomic) int abVer;
@property (copy, nonatomic) NSString *versionNames;
@property (copy, nonatomic) NSString *clientVersionNames;
@property (copy, nonatomic) NSString *parameters;
@property (copy, nonatomic) NSString *clientParameters;
@property (retain, nonatomic) NSMutableDictionary *nsParameters;
@property (readonly, nonatomic) unsigned long long nsParameters_Count;
@property (retain, nonatomic) NSMutableDictionary *nsClientParameters;
@property (readonly, nonatomic) unsigned long long nsClientParameters_Count;
@property (retain, nonatomic) NSMutableDictionary *tranParameters;
@property (readonly, nonatomic) unsigned long long tranParameters_Count;
@property (retain, nonatomic) NSMutableDictionary *tranClientParameters;
@property (readonly, nonatomic) unsigned long long tranClientParameters_Count;
@property (copy, nonatomic) NSData *requestData;
@property (nonatomic) long long reservedWord;

+ (id)descriptor;

@end
