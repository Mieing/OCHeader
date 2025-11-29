@class NSString;

@interface AWEOpenShareIronMan : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *startPageURL;
@property (copy, nonatomic) NSString *thirdAppSchema;
@property (copy, nonatomic) NSString *extra;

- (id)anchorJSONString;
- (void).cxx_destruct;

@end
