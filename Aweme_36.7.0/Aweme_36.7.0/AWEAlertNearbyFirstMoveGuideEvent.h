@class NSDictionary, NSString;

@interface AWEAlertNearbyFirstMoveGuideEvent : NSObject <AWEAlertEventProtocol>

@property (copy, nonatomic) id /* block */ canShowBlk;
@property (copy, nonatomic) id /* block */ beginShowBlk;
@property (copy, nonatomic) id /* block */ dismissBlk;
@property (copy, nonatomic) id /* block */ jumpBlk;
@property (copy, nonatomic) id /* block */ animationBeginBlk;
@property (copy, nonatomic) id /* block */ alertCloseBlk;
@property (nonatomic) unsigned long long transformerOfflineType;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventID;
+ (id)eventDescription;

- (void).cxx_destruct;

@end
