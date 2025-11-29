@class NSArray;

@interface WCPayGetUserExInfoCgiResponse : NSObject

@property (nonatomic) BOOL needArea;
@property (nonatomic) BOOL needProfession;
@property (retain, nonatomic) NSArray *professions;
@property (nonatomic) BOOL needNationality;
@property (retain, nonatomic) NSArray *nationalityExcludeArray;

- (void).cxx_destruct;

@end
