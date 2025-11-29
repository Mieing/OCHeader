@class NSString;

@interface ACCMusicInfo : MTLModel <MTLJSONSerializing, NSCopying>

@property (copy, nonatomic) NSString *musicID;
@property (copy, nonatomic) NSString *musicUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)acc_musicInfoDict;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
