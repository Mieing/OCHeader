@class NSString;

@interface MMSpecialMsgSearchHelperReport : MMObject

@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned int action;
@property (nonatomic) unsigned int pageType;
@property (retain, nonatomic) NSString *query;
@property (nonatomic) unsigned int resCount;
@property (nonatomic) unsigned int matchType;

- (void).cxx_destruct;

@end
