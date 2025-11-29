@class NSString, NSMutableArray;

@interface WAAuthorizationItemData : NSObject

@property (copy, nonatomic) NSString *weappUsrName;
@property (retain, nonatomic) NSMutableArray *scopeList;
@property (nonatomic) unsigned int timestamp;

- (void).cxx_destruct;

@end
