@class NSString, NSMutableDictionary;

@interface VoiceTransSessionInfo : MMObject <PBCoding>

@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSMutableDictionary *dicVoiceTransInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_dicVoiceTransInfo;
+ (void)initialize;

@end
