@class NSDictionary, NSArray, NSString;

@interface BDARVVideoModel : NSObject <BDARVJSONModel>

@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (copy, nonatomic) NSDictionary *videoModel;
@property (copy, nonatomic) NSArray *playTrackUrlList;
@property (copy, nonatomic) NSArray *playoverTrackUrlList;
@property (copy, nonatomic) NSArray *effectivePlayTrackUrlList;
@property (nonatomic) double effectivePlayTime;
@property (copy, nonatomic) NSString *videoid;
@property (nonatomic) long long duration;
@property (copy, nonatomic) NSString *groupid;
@property (copy, nonatomic) NSDictionary *cover;
@property (copy, nonatomic) NSString *type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
