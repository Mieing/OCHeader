@class NSString;

@interface VideoMediaInfo : NSObject

@property (nonatomic) unsigned int duration;
@property (nonatomic) unsigned int timescale;
@property (nonatomic) unsigned int trakduration;
@property (nonatomic) unsigned int traktimescale;
@property (nonatomic) unsigned int rate;
@property (nonatomic) unsigned int flages;
@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned int modifiyTime;
@property (retain, nonatomic) NSString *vcodec;
@property (retain, nonatomic) NSString *acodec;

- (id)description;
- (void).cxx_destruct;

@end
