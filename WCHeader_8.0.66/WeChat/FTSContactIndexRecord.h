@class NSString, NSMutableArray, NSMutableSet;

@interface FTSContactIndexRecord : NSObject

@property (retain, nonatomic) NSMutableArray *unIndexedUsernameArr;
@property (retain, nonatomic) NSString *nextMaxUserName;
@property (retain, nonatomic) NSMutableSet *indexingUserNames;
@property (nonatomic) unsigned int aboveMaxUserNameCount;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *maxIndexedUserName;
@property (retain, nonatomic) NSMutableSet *unIndexedUsernames;

- (id)init;
- (void).cxx_destruct;

@end
