@class NSString;

@interface UserMetaData : NSObject

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *value;
@property (nonatomic) int flag;

- (void).cxx_destruct;

@end
