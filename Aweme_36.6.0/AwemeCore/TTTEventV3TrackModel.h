@class NSString;

@interface TTTEventV3TrackModel : NSObject <NSCopying, NSCoding>

@property (retain, nonatomic) NSString *track_id;
@property (retain, nonatomic) NSString *entire_log;
@property (retain, nonatomic) NSString *created_at;
@property (retain, nonatomic) NSString *session_id;
@property (retain, nonatomic) NSString *region;
@property (nonatomic) BOOL sending;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
