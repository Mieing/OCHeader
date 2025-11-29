@class NSString;

@interface AISearchConfig : NSObject

@property (copy, nonatomic) NSString *hotword;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int businessType;
@property (copy, nonatomic) NSString *extParams;
@property (copy, nonatomic) NSString *navBarParms;

- (void).cxx_destruct;

@end
