@class NSArray, NSString;

@interface MMIlinkCheckResourceTypeInfo : NSObject

@property (retain, nonatomic) NSArray *projectIds;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned int timeStamp;
@property (retain, nonatomic) NSString *extInfo;

- (void).cxx_destruct;

@end
