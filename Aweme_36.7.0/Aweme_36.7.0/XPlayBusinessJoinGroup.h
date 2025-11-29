@class NSDictionary, NSArray, NSString;

@interface XPlayBusinessJoinGroup : NSObject <XPlayGameJoinGroupProtocol>

@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSArray *groupList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)initWithDict:(id)a0;

- (void).cxx_destruct;

@end
