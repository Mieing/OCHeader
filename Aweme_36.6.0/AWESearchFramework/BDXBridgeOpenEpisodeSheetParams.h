@class NSString, NSNumber;

@interface BDXBridgeOpenEpisodeSheetParams : BDXBridgeModel

@property (copy, nonatomic) NSString *album_id;
@property (retain, nonatomic) NSNumber *seqs_count;
@property (retain, nonatomic) NSNumber *latest_seqs_count;
@property (retain, nonatomic) NSNumber *current_count;
@property (retain, nonatomic) NSNumber *album_list_show_title;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *mp_id;
@property (copy, nonatomic) NSString *alasrc;
@property (retain, nonatomic) NSNumber *schema_type;
@property (retain, nonatomic) NSNumber *show_period;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
