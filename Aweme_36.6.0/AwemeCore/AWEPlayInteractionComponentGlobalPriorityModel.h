@class NSString, NSPointerArray;
@protocol AWEPzComponentProtocol;

@interface AWEPlayInteractionComponentGlobalPriorityModel : NSObject

@property (copy, nonatomic) NSString *componentType;
@property (copy, nonatomic) NSString *componentID;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSPointerArray *components;
@property (retain, nonatomic) id<AWEPzComponentProtocol> pzComponent;

- (void).cxx_destruct;

@end
