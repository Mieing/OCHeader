@class NSString;

@interface TPHlsTag : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *language;
@property (nonatomic) long long bandwidth;
@property (copy, nonatomic) NSString *resolution;
@property (nonatomic) float framerate;
@property (copy, nonatomic) NSString *codecs;
@property (copy, nonatomic) NSString *groupId;

- (id)init;
- (void).cxx_destruct;

@end
