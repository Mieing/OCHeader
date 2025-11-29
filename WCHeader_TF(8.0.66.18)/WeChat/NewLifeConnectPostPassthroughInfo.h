@class NSString;

@interface NewLifeConnectPostPassthroughInfo : NSObject <PBCoding>

@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned int tagSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_sessionId;
+ (void)PBArrayAdd_tagSource;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
