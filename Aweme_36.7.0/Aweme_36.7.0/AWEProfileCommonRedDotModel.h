@class NSString;

@interface AWEProfileCommonRedDotModel : NSObject <AWEProfileRedDotNodeModelProtocol>

@property (nonatomic) long long count;
@property (nonatomic) long long redDotType;
@property (copy, nonatomic) NSString *componentID;
@property (nonatomic) double timeStamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
