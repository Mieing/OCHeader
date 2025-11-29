@class NSString;

@interface TTVideoEngineMediaTrackInfoModel : NSObject <TTVideoEngineMediaTrackInfoProtocol>

@property (nonatomic) long long index;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *groupId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithDictionary:(id)a0;

@end
