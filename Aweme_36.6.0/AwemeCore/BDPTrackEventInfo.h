@class NSString, NSMutableDictionary, NSDictionary, BDPUniqueID;

@interface BDPTrackEventInfo : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableDictionary *storage;
@property (copy, nonatomic) NSString *mp_id;
@property (copy, nonatomic) NSString *mp_name;
@property (copy, nonatomic) NSString *launch_from;
@property (copy, nonatomic) NSString *_param_for_special;
@property (copy, nonatomic) NSString *mp_gid;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *location;
@property (copy, nonatomic) NSString *startPageUrl;
@property (copy, nonatomic) NSString *startPagePath;
@property (copy, nonatomic) BDPUniqueID *uniqueId;
@property (readonly, nonatomic) NSDictionary *infoDict;

- (void)setLaunch_from:(id)a0;
- (id)launch_from;
- (void)setMp_id:(id)a0;
- (id)mp_id;
- (void)set_param_for_special:(id)a0;
- (void)setMp_name:(id)a0;
- (void)setMp_gid:(id)a0;
- (id)_param_for_special;
- (id)mp_name;
- (id)mp_gid;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
