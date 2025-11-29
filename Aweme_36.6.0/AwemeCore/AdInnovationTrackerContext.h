@class NSString, NSDictionary;

@interface AdInnovationTrackerContext : NSObject

@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *refer;
@property (copy, nonatomic) NSDictionary *adExtraData;

- (void)appendAdExtraDataWithParams:(id)a0;
- (id)allTrackParams;
- (void).cxx_destruct;

@end
