@class NSDictionary, NSMutableDictionary, NSString;

@interface IESGCPTrackTrafficExtraModel : NSObject

@property (retain, nonatomic) NSMutableDictionary *propertyStore;
@property (readonly, nonatomic) NSDictionary *JSONDictionary;
@property (copy, nonatomic) NSString *trafficType;
@property (copy, nonatomic) NSString *isOtherChannel;
@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *enterFromMerge;
@property (copy, nonatomic) NSString *enterSubMethod;
@property (copy, nonatomic) NSString *flowId;
@property (copy, nonatomic) NSString *searchId;
@property (copy, nonatomic) NSString *searchResultId;

- (void).cxx_destruct;
- (id)init;

@end
