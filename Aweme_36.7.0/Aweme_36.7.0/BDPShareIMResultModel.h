@class NSString;

@interface BDPShareIMResultModel : NSObject

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *toSessionID;
@property (copy, nonatomic) NSString *toUserID;

- (id)parseInDictionary;
- (void).cxx_destruct;

@end
