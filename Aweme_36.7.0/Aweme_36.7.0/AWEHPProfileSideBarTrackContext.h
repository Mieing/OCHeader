@class NSString;

@interface AWEHPProfileSideBarTrackContext : NSObject <AWELeftSideBarTrackContextProtocol>

@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *identification;
@property (copy, nonatomic) NSString *entranceStatus;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) long long openTimeStamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
