@class NSString;

@interface ZolozSimpleValueContent : NSObject

@property (retain, nonatomic) NSString *simpleValue;
@property (nonatomic) unsigned long long length;
@property (retain, nonatomic) NSString *simpleOutValue;
@property (retain, nonatomic) NSString *simpleEnValue;

+ (id)sharedInstance;

- (void).cxx_destruct;

@end
