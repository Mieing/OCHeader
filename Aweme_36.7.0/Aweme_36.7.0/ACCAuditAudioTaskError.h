@class NSString;

@interface ACCAuditAudioTaskError : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) long long code;
@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) double endTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (id)initWithDomain:(id)a0 code:(long long)a1 text:(id)a2 startTime:(double)a3 endTime:(double)a4;
- (void).cxx_destruct;

@end
