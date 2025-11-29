@class NSString;

@interface WeVisModelTypeConfig : NSObject

@property (retain, nonatomic) NSString *key;
@property (nonatomic) long long type;
@property (nonatomic) long long subtype;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *filepath;

- (void).cxx_destruct;

@end
