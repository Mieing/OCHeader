@class NSString, NSData;

@interface GetSearchShareResponse_SearchShareContext : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *searchId;
@property (retain, nonatomic) NSString *requestId;
@property (nonatomic) unsigned int businessType;
@property (nonatomic) unsigned int subType;
@property (retain, nonatomic) NSString *docId;
@property (retain, nonatomic) NSData *extendInfo;

+ (void)initialize;

@end
