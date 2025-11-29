@class NSString;

@interface SpeakTextAudioExtInfo : NSObject <PBCoding>

@property (nonatomic) unsigned int bytesLen;
@property (nonatomic) unsigned int audioTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_bytesLen;
+ (void)PBArrayAdd_audioTime;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
