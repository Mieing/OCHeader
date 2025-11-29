@class NSString;

@interface AWEFeedInteractiveAngleModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double up;
@property (nonatomic) double down;
@property (nonatomic) double left;
@property (nonatomic) double right;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *videoType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
