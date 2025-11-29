@class NSString;

@interface WCSearchResultTimeStatus : NSObject

@property (nonatomic) unsigned long long showTimeStamp;
@property (nonatomic) unsigned long long exposeTimeStamp;
@property (nonatomic) unsigned int section;
@property (nonatomic) unsigned int index;
@property (nonatomic) unsigned int subType;
@property (nonatomic) unsigned long long clickSubType;
@property (nonatomic) long long boxIndex;
@property (nonatomic) unsigned int matchType;
@property (retain, nonatomic) NSString *itemUserName;

- (id)init;
- (void).cxx_destruct;

@end
