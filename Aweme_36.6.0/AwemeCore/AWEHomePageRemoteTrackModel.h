@class NSString, NSArray;

@interface AWEHomePageRemoteTrackModel : NSObject <AWEHomePageRemoteTrackContextProtocol>

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *authorID;
@property (nonatomic) long long duration;
@property (copy, nonatomic) NSString *previousModuleType;
@property (copy, nonatomic) NSString *previousBusinessType;
@property (copy, nonatomic) NSString *previousBusinessId;
@property (copy, nonatomic) NSArray *consumedBusinessIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
