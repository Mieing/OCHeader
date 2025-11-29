@class NSString;

@interface MPPagePageUrlInfo : MMObject

@property (copy, nonatomic) NSString *url;
@property (nonatomic) unsigned int itemShowType;
@property (nonatomic) BOOL isPaySubscribe;
@property (nonatomic) unsigned int scene;
@property (copy, nonatomic) NSString *pageIdentifier;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned int commentTopicId;

- (id)urlInfoIdentifier;
- (id)description;
- (void).cxx_destruct;

@end
