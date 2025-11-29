@class NSString;

@interface WCPayCurrentSpeechConfig : NSObject <PBCoding>

@property (retain, nonatomic) NSString *currentSpeechId;
@property (nonatomic) unsigned int version;
@property (retain, nonatomic) NSString *md5;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_currentSpeechId;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_md5;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
