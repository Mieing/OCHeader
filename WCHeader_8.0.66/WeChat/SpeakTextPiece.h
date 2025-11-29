@class NSData, NSString;

@interface SpeakTextPiece : NSObject <PBCoding>

@property (nonatomic) unsigned int index;
@property (nonatomic) unsigned int voiceFormat;
@property (retain, nonatomic) NSData *voiceData;
@property (nonatomic) BOOL endFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_index;
+ (void)PBArrayAdd_voiceFormat;
+ (void)PBArrayAdd_voiceData;
+ (void)PBArrayAdd_endFlag;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
