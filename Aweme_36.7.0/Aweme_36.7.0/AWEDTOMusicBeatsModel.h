@class NSArray, NSDictionary, NSString;

@interface AWEDTOMusicBeatsModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long musicBeatStatus;
@property (nonatomic) long long musicBeatResult;
@property (nonatomic) BOOL isMusicBeatsAvailable;
@property (copy, nonatomic) NSArray *beatsArray;
@property (copy, nonatomic) NSDictionary *projectTimeIntervalMap;
@property (copy, nonatomic) NSDictionary *projectMusicTimeMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
