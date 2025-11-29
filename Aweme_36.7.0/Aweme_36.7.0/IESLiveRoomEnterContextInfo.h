@class NSNumber, NSString, NSDictionary;

@interface IESLiveRoomEnterContextInfo : NSObject

@property (retain, nonatomic) NSNumber *roomID;
@property (copy, nonatomic) NSString *anchorID;
@property (copy, nonatomic) NSString *secAnchorID;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *reqId;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSDictionary *contextParams;
@property (nonatomic) BOOL toSingleRoom;

- (void).cxx_destruct;

@end
