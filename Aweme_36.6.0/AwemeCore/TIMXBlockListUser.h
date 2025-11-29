@class NSString, NSDate;

@interface TIMXBlockListUser : NSObject <TIMXBlockListUserProtocol>

@property (nonatomic) long long userID;
@property (retain, nonatomic) NSDate *createdAt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
