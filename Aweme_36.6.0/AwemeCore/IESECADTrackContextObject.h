@class NSString, NSDictionary, NSNumber;

@interface IESECADTrackContextObject : NSObject <IESECAdTrackContext>

@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSDictionary *adExtraData;
@property (copy, nonatomic) NSString *logExtra;
@property (retain, nonatomic) NSNumber *creativeID;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSString *refer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
