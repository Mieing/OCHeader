@class NSString, NSMutableSet;

@interface AWEGoldenHouseController : AWEGoldenHouseBaseController <AWEFeedControllerProtocol, AWEGoldenHouseControllerProtocol>

@property (retain, nonatomic) NSMutableSet *insertedItemID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
