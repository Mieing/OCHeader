@class NSString;

@interface IESIMCreateGroupOpenCapabilityModel : IESIMGroupOpenCapabilityModel

@property (nonatomic) long long checkSource;
@property (nonatomic) long long startTime;
@property (copy, nonatomic) NSString *source;
@property (nonatomic) BOOL enterChatOnCreate;
@property (copy, nonatomic) NSString *sendPublicCard;
@property (copy, nonatomic) NSString *groupType;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) long long createSource;
@property (copy, nonatomic) NSString *bizExt;
@property (copy, nonatomic) id /* block */ dismissBlock;

+ (id)optionalPropertyNameSet;

- (id)initWithTarget:(id)a0 bizLine:(long long)a1 bizScene:(id)a2 enterFrom:(id)a3 enterMethod:(id)a4;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;

@end
