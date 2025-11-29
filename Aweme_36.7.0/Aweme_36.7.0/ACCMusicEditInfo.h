@class NSString, ACCMusicInfo;

@interface ACCMusicEditInfo : MTLModel <MTLJSONSerializing, NSCopying>

@property (retain, nonatomic) ACCMusicInfo *musicInfo;
@property (nonatomic) long long startTime;
@property (nonatomic) long long duration;
@property (nonatomic) double speed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
