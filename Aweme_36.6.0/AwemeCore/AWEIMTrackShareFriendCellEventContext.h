@class NSString, NSIndexPath, NSDictionary;
@protocol AWEIMShareModelProtocol;

@interface AWEIMTrackShareFriendCellEventContext : AWEIMTrackEventContextBaseModel <AWEIMTrackShareFriendCellEventContextPrtocol>

@property (retain, nonatomic) id<AWEIMShareModelProtocol> shareModel;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSDictionary *extraTrackInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
