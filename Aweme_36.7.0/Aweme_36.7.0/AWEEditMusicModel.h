@class NSString, NSNumber;

@interface AWEEditMusicModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *musicID;
@property (copy, nonatomic) NSString *volume;
@property (retain, nonatomic) NSNumber *loop;
@property (retain, nonatomic) NSNumber *musicShowRank;
@property (copy, nonatomic) NSString *musicRecType;
@property (copy, nonatomic) NSString *musicSelectedFrom;
@property (copy, nonatomic) NSString *musicTimeInfo;
@property (retain, nonatomic) NSNumber *isImageBeat;
@property (retain, nonatomic) NSNumber *isClearMusicBeats;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
